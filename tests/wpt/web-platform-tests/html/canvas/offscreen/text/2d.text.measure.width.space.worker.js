// DO NOT EDIT! This test has been generated by /html/canvas/tools/gentest.py.
// OffscreenCanvas test in a worker:2d.text.measure.width.space
// Description:Space characters are converted to U+0020 and collapsed (per CSS) for OffscreenCanvas
// Note:

importScripts("/resources/testharness.js");
importScripts("/html/canvas/resources/canvas-tests.js");

var t = async_test("Space characters are converted to U+0020 and collapsed (per CSS) for OffscreenCanvas");
var t_pass = t.done.bind(t);
var t_fail = t.step_func(function(reason) {
    throw reason;
});
t.step(function() {

var offscreenCanvas = new OffscreenCanvas(100, 50);
var ctx = offscreenCanvas.getContext('2d');

var f = new FontFace("CanvasTest", "url('/fonts/CanvasTest.ttf')");
let fonts = (self.fonts ? self.fonts : document.fonts);
f.load();
fonts.add(f);
fonts.ready.then(function() {
    ctx.font = '50px CanvasTest';
    _assertSame(ctx.measureText('A B').width, 150, "ctx.measureText('A B').width", "150");
    _assertSame(ctx.measureText('A  B').width, 200, "ctx.measureText('A  B').width", "200");
    _assertSame(ctx.measureText('A \x09\x0a\x0c\x0d  \x09\x0a\x0c\x0dB').width, 150, "ctx.measureText('A \\x09\\x0a\\x0c\\x0d  \\x09\\x0a\\x0c\\x0dB').width", "150");
    _assert(ctx.measureText('A \x0b B').width >= 200, "ctx.measureText('A \\x0b B').width >= 200");

    _assertSame(ctx.measureText(' AB').width, 100, "ctx.measureText(' AB').width", "100");
    _assertSame(ctx.measureText('AB ').width, 100, "ctx.measureText('AB ').width", "100");
}).then(t_pass, t_fail);

});
done();
