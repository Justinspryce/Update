[Variables]

; --------------------------
; Theme Variables
; --------------------------

IconPack=Default

AltFont1=0
AltFont2=0
AltFont3=0
AltFont4=0
AltFont5=0
AltFont6=0
AltFont7=0
AltFont8=1
AltFont9=0
AltFont10=0
AltFont11=0
AltFont12=0
AltFont13=0
AltFont14=1
AltFont15=0
AltFont16=0
AltFont17=0
AltFont18=0

;-------------------------------------------------------------------

TopBarBlur=0
TopBarFontSize=((9*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
TitleOpacity=255
TopBarAntiAlias=1
TopBarObjectXOffset=((30*#DroptopSize#)-((30*#DroptopSize#)%1))
TitlePadding="((8*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((2*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((8*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((0*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(0*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((31*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(3*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
SysTextYPadding=((2*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(6*#DroptopSize#)
SysAppWPadding=(0*#DroptopSize#)
TopBarGradientAngle=90
HideTopBarGradient=0
BorderTopH=0
BorderBottomH=0
TitleCase=None
HideOptionalShapes=0
HighlightOffsetY=((6*#DroptopSize#)-((6*#DroptopSize#)%1))
HighlightOffsetH=(0*#DroptopSize#)
TopBarSkewON=0
TopBarSkew=(-20*#TopBarSkewON#)
TopBarIconHOffset=((-16*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(6*#DroptopSize#)
TopGradientCutout=(6*#DroptopSize#)
AutohideSlideRate=(4*#DroptopSize#)
AutohideFadeRate=1.6

;----------------------------------------------------------------------------------

DropdownBlur=0
DropdownBlurAction=HideBlur
DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownMenuHeight=((26*#DroptopSize#)-((26*#DroptopSize#)%1))
DropdownMenuFontSize=((8*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
DropdownItemOpacity=255
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownMenuHeight#-#IconH#)/2)
DropdownIconSpacing=0
DropdownIconXoffset=(2*#DroptopSize#)
DropdownIconYoffset=((2*#DroptopSize#)-((2*#DroptopSize#)%1))
DropdownTextOffset=(2*#DroptopSize#)
DropdownItemYOffset=((4*#DroptopSize#)-((4*#DroptopSize#)%1))
DropdownPadding=(26*#DroptopSize#)
DropdownPadding2=(20*#DroptopSize#)
DropdownPaddingY=(((1*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(155*#DroptopSize#)
DialogMenuYOffset=(3*#DroptopSize#)
NoIconPadding=(3*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(0*#DroptopSize#)
ArrowHighlightW=((20*#DroptopSize#)-((20*#DroptopSize#)%1))
ArrowXOffset=(0*#DroptopSize#)
ArrowXOffsetTray=(-1*#DroptopSize#)
ArrowXOffsetRTL=(0*#DroptopSize#)
ArrowStyle=1
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=0
SubMenuXOffset=(5*#DroptopSize#)
DropdownCutout=(0*#DroptopSize#)
HighlightCutout=(0*#DroptopSize#)
HighlightXOffset=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
ActionButtonOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
BlockSize=(#DropdownMenuWidth#/6)

;-------------------------
; Colors

ChamLum1=1
ChamLum2=1
ChamLumA=255,255,255
ChamLumB=0,0,0

ChamBG1=100,116,144
ChamBG2=142,154,174
ChamBG3=152,176,196
ChamFG1=255,255,255
ChamFG2=255,255,255

BGColor1=35,44,61
BGColor2=35,44,61
BGColor3=35,44,61
SuperColor=255,255,255
SuperColor2=255,255,255
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
ToolbarBG1=35,44,61
ToolbarHL=251,72,72
TopBarHL=251,72,72
TopBarHomeIconColor=255,255,255
AssistantIconTint=#TopBarFontColor1#
AssistantIconTint2=#TopBarFontColor2#
TopButtonGreyscale=0
BorderTopColor=25,25,25,(55*(#BGOpacity1#/255))
BorderBottomColor=0,0,0,(26*(#BGOpacity1#/255))
LuminosityOffset=255,255,255,0
SliderTextColor=#SuperColor2#
TopBarSolidColor=0
DropdownSliderColor=#ToolbarHL#
IconTint=255,255,255
Greyscale=0
PresetColor=1
LockPresetColor=1
;---
; ColorMode/Charging/BatteryLow
BatteryFillColor000=#TopBarFontColor1#
BatteryFillColor001=#TopBarFontColor1#
BatteryFillColor010=#TopBarFontColor1#
BatteryFillColor011=#TopBarFontColor1#

BatteryFillColor100=#TopBarFontColor1#
BatteryFillColor101=233,86,70
BatteryFillColor110=47,207,91
BatteryFillColor111=47,207,91

BatteryColorMode=0

;-------------------------
; Opacities

BGOpacity1=255
BGOpacity2=176.5
ToolbarOpacity1=255
ToolbarHLO=255
TopBarHLO=255
ToolbarHLO2Offset=0
TopBarHLO2Offset=0
ToolbarHLO2=185
TopBarHLO2=185

DismissOpacity=#BGOpacity1#

BlurType0=Blur
BlurType1=Acrylic
BlurTypeNum=1

TopBarBlurType=[#BlurType[#BlurTypeNum]]

TopBarBlurAction0=!HideBlur
TopBarBlurAction1=!ShowBlur
TopBarBlurActionNum=0

BatteryOutlineOpacity=#TitleOpacity#
BatteryFillOpacity=255

;---

ShadowsON=0

TopBarShadow0=None
TopBarShadow1=None

DropdownShadow0=None
DropdownShadow1=All

;-------------------------
; Font

BorderOpacity=25
HoverOpacity=25
FontWeight=400
DegreeSymbol=°
PercentSymbol=%
PowerSymbol=+
MusicSymbol="#NotificationPlaying#"
MailSymbol="#NotificationMail#"
DismissFontSize=#TopBarFontSize#
DismissW=(170*#DroptopSize#)
SliderTextEffect=None
TopBarCharacterSpacing=0 | 0
DropdownCharacterSpacing=0 | 0
TopBarInlineShadow=

;-------------------------
; Shapes & backgrounds

SelectedSizeOffset=(0*#DroptopSize#)
StrokeWidth=(0*#DroptopSize#)
StrokeWidth2=(0*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TimeStrokeWidth=(3*#DroptopSize#)
StrokeOpacity1=0
StrokeOpacity2=75
TopBarStrokeOpacity=0
StrokeColor1=#ToolbarHL#,#StrokeOpacity1#
StrokeColor2=#SuperColor#,#StrokeOpacity2#
TopBarStrokeColor=#SuperColor#
Corner0=2
Corner1=6
BGCorner=([#Corner[#RoundedCorners]]*#DroptopSize#)
HLCorner=(#Corner0#*#DroptopSize#)
TopBarCorner=#BGCorner#
TopGradientCorner=#TopBarCorner#
HLContainerCorner=0
RoundedCorners=1
DividerShape=Rectangle (#StrokeWidth2#+1),(1*#DroptopSize#),(#DropdownMenuWidth#-(#StrokeWidth2#*2)),(2*#DroptopSize#),(0*#DroptopSize#) | Fill Color #SuperColor#,40 | StrokeWidth 0

HomeShape=Rectangle #TopBarObjectXOffset#,#TopBarCutout#,[Home:W],(#TopHeight#-(#TopBarCutout#*2)),#HLCorner# | StrokeWidth 0 | Stroke Color #BGColor1# | Skew #TopBarSkew#,0 | Extend HomeFillColor#HideOptionalShapes#

FlatTopShape=Rectangle #DropdownCutout#,0,((#DropdownMenuWidth#+2-(#DropdownCutout#*2))*#DropdownMenuFlatTop#),(#BGCorner#*#DropdownMenuFlatTop#),0 | Fill Color 255,55,55 | StrokeWidth 0

;-------------------------
; Chameleon settings

ChamBGColor1=35,44,61
ChamBGColor2=35,44,61
ChamBGColor3=35,44,61
ChamToolbarBG1=35,44,61
ChamToolbarHL=251,72,72
ChamTopBarHL=251,72,72
ChamSuperColor=255,255,255
ChamSuperColor2=255,255,255
ChamTopBarFontColor1=255,255,255
ChamTopBarFontColor2=255,255,255
ChamStrokeColor1=0,0,0,#StrokeOpacity1#
ChamStrokeColor2=0,0,0,#StrokeOpacity2#
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=255,255,255
ChamAssistantIconTint=#ChamTopBarFontColor1#
ChamAssistantIconTint2=#ChamTopBarFontColor2#
ChamBatteryFillColor=255,255,255
ChamLightIntensity=255
ChamDarkIntensity=255
ChamLumThreshold=0.5

BLANK=35,44,61

;-------------------------
