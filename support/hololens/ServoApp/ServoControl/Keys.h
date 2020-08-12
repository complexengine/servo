using namespace winrt::Windows::System;

namespace winrt {
std::optional<const char *> KeyToString(Windows::System::VirtualKey key) {
  switch (key) {
  case VirtualKey::F1:
    return "F1";
  case VirtualKey::F2:
    return "F2";
  case VirtualKey::F3:
    return "F3";
  case VirtualKey::F4:
    return "F4";
  case VirtualKey::F5:
    return "F5";
  case VirtualKey::F6:
    return "F6";
  case VirtualKey::F7:
    return "F7";
  case VirtualKey::F8:
    return "F8";
  case VirtualKey::F9:
    return "F9";
  case VirtualKey::F10:
    return "F10";
  case VirtualKey::F11:
    return "F11";
  case VirtualKey::F12:
    return "F12";
  case VirtualKey::Shift:
    return "Shift";
  case VirtualKey::LeftShift:
    return "Shift";
  case VirtualKey::RightShift:
    return "Shift";
  case VirtualKey::Control:
    return "Control";
  case VirtualKey::LeftControl:
    return "Control";
  case VirtualKey::RightControl:
    return "Control";
  case VirtualKey::Escape:
    return "Escape";
  case VirtualKey::Enter:
    return "Enter";
  case VirtualKey::Tab:
    return "Tab";
  case VirtualKey::Delete:
    return "Delete";
  case VirtualKey::Back:
    return "Backspace";
  case VirtualKey::GoForward:
    return "BrowserForward";
  case VirtualKey::GoBack:
    return "BrowserBack";
  case VirtualKey::GoHome:
    return "BrowserHome";
  case VirtualKey::Favorites:
    return "BrowserFavorites";
  case VirtualKey::Search:
    return "BrowserSearch";
  case VirtualKey::Stop:
    return "BrowserStop";
  case VirtualKey::Menu:
    return "Alt";
  case VirtualKey::RightMenu:
    return "Alt";
  case VirtualKey::LeftMenu:
    return "Alt";
  case VirtualKey::CapitalLock:
    return "CapsLock";
  case VirtualKey::LeftWindows:
    return "Meta";
  case VirtualKey::RightWindows:
    return "Meta";
  case VirtualKey::NumberKeyLock:
    return "NumLock";
  case VirtualKey::Scroll:
    return "ScrollLock";
  case VirtualKey::Down:
    return "ArrowDown";
  case VirtualKey::Up:
    return "ArrowUp";
  case VirtualKey::Left:
    return "ArrowLeft";
  case VirtualKey::Right:
    return "ArrowRight";
  case VirtualKey::End:
    return "End";
  case VirtualKey::Home:
    return "Home";
  case VirtualKey::PageDown:
    return "PageHome";
  case VirtualKey::PageUp:
    return "PageUp";
  case VirtualKey::Clear:
    return "Clear";
  case VirtualKey::Insert:
    return "Insert";
  case VirtualKey::Accept:
    return "Accept";
  case VirtualKey::Cancel:
    return "Cancel";
  case VirtualKey::Execute:
    return "Execute";
  case VirtualKey::Help:
    return "Help";
  case VirtualKey::Pause:
    return "Pause";
  case VirtualKey::Select:
    return "Select";
  case VirtualKey::Print:
    return "Print";
  case VirtualKey::Convert:
    return "Convert";
  case VirtualKey::NonConvert:
    return "NonConvert";
  case VirtualKey::ModeChange:
    return "ModeChange";
  case VirtualKey::Hangul:
    return "HangulMode";
  case VirtualKey::Hanja:
    return "HanjaMode";
  case VirtualKey::Junja:
    return "JunjaMode";
  default:
    return {};
  }
}
} // namespace winrt
