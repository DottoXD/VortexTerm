import 'package:forui/forui.dart';

FThemeData getThemeData(bool dark, bool desktop) {
  FColors colors;

  if (dark) {
    colors = (desktop
        ? FThemes.neutral.dark.desktop.colors
        : FThemes.neutral.dark.touch.colors);
  } else {
    colors = (desktop
        ? FThemes.neutral.light.desktop.colors
        : FThemes.neutral.light.touch.colors);
  }

  return FThemeData(colors: colors, touch: !desktop);
}
