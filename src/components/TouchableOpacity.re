include TouchableOpacityElement;

[@react.component] [@bs.module "react-native"]
external make:
  (
    ~ref: ref=?,
    ~activeOpacity: float=?,
    ~focusedOpacity: float=?,
    ~hasTVPreferredFocus: bool=?,
    ~style: Style.t=?,
    ~tvParallaxProperties: TV.parallax=?,
    // TouchableWithoutFeedback props
    ~accessible: bool=?,
    ~accessibilityElementsHidden: bool=?,
    ~accessibilityHint: string=?,
    ~accessibilityIgnoresInvertColors: bool=?,
    ~accessibilityLabel: string=?,
    ~accessibilityLiveRegion: Accessibility.liveRegion=?,
    ~accessibilityRole: Accessibility.role=?,
    ~accessibilityState: Accessibility.state=?,
    ~accessibilityValue: Accessibility.value=?,
    ~accessibilityViewIsModal: bool=?,
    ~delayLongPress: int=?,
    ~delayPressIn: int=?,
    ~delayPressOut: int=?,
    ~disabled: bool=?,
    ~hitSlop: View.edgeInsets=?,
    ~importantForAccessibility: [@bs.string] [
                                  | `auto
                                  | `yes
                                  | `no
                                  | [@bs.as "no-hide-descendants"]
                                    `noHideDescendants
                                ]
                                  =?,
    ~onLayout: Event.layoutEvent => unit=?,
    ~onLongPress: Event.pressEvent => unit=?,
    ~onPress: Event.pressEvent => unit=?,
    ~onPressIn: Event.pressEvent => unit=?,
    ~onPressOut: Event.pressEvent => unit=?,
    ~pressRetentionOffset: View.edgeInsets=?,
    ~testID: string=?,
    ~touchSoundDisabled: bool=?,
    ~children: React.element=?,
    // React Native Web Props
    ~rel: [@bs.string] [
            | `alternate
            | `author
            | [@bs.as "dns-prefetch"] `dnsPrefetch
            | `icon
            | `license
            | `next
            | `pingback
            | `preconnect
            | `prefetch
            | `preload
            | `prerender
            | `prev
            | `search
            | `stylesheet
          ]
            =?,
    ~href: string=?,
    ~target: Web.target=?
    // React Native Web Props
    ~onMouseDown: ReactEvent.Mouse.t => unit=?,
    ~onMouseEnter: ReactEvent.Mouse.t => unit=?,
    ~onMouseLeave: ReactEvent.Mouse.t => unit=?,
    ~onMouseMove: ReactEvent.Mouse.t => unit=?,
    ~onMouseOver: ReactEvent.Mouse.t => unit=?,
    ~onMouseOut: ReactEvent.Mouse.t => unit=?,
    ~onMouseUp: ReactEvent.Mouse.t => unit=?
  ) =>
  React.element =
  "TouchableOpacity";
