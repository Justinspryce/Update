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
AltFont8=0
AltFont9=0
AltFont10=0
AltFont11=0
AltFont12=0
AltFont13=0
AltFont14=0
AltFont15=0
AltFont16=0
AltFont17=0
AltFont18=0

;-------------------------------------------------------------------

TopBarBlur=0
TopBarFontSize=((11*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
TitleOpacity=255
TopBarAntiAlias=1
TopBarObjectXOffset=((18*#DroptopSize#)-((18*#DroptopSize#)%1))
TitlePadding="((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((0.5*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(0*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((30*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(3*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
SysTextYPadding=((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(6*#DroptopSize#)
SysAppWPadding=(0*#DroptopSize#)
TopBarGradientAngle=90
HideTopBarGradient=0
BorderTopH=0
BorderBottomH=0
TitleCase=None
HideOptionalShapes=1
HighlightOffsetY=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
HighlightOffsetH=(0*#DroptopSize#)
TopBarSkewON=1
TopBarSkew=(-20*#TopBarSkewON#)
TopBarIconHOffset=((-10*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(5*#DroptopSize#)
TopGradientCutout=#TopBarCutout#
AutohideSlideRate=(3*#DroptopSize#)
AutohideFadeRate=6.8

;-------------------------------------------------------------------

DropdownBlur=1
DropdownBlurAction=ShowBlur
DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownMenuHeight=((25*#DroptopSize#)-((25*#DroptopSize#)%1))
DropdownMenuFontSize=((11*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
DropdownItemOpacity=255
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownMenuHeight#-#IconH#)/2)
DropdownIconSpacing=0
DropdownIconXoffset=(8*#DroptopSize#)
DropdownIconYoffset=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownTextOffset=(2*#DroptopSize#)
DropdownItemYOffset=((8*#DroptopSize#)-((8*#DroptopSize#)%1))
DropdownPadding=(30*#DroptopSize#)
DropdownPadding2=(30*#DroptopSize#)
DropdownPaddingY=((1*(([#AltFont[#LanguageNum]]-1)*-1))+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(185*#DroptopSize#)
DialogMenuYOffset=(3*#DroptopSize#)
NoIconPadding=(6*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(0*#DroptopSize#)
ArrowHighlightW=((21*#DroptopSize#)-((21*#DroptopSize#)%1))
ArrowXOffset=(0*#DroptopSize#)
ArrowXOffsetTray=(0*#DroptopSize#)
ArrowXOffsetRTL=(0*#DroptopSize#)
ArrowStyle=4
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=0
SubMenuXOffset=(5*#DroptopSize#)
DropdownCutout=(1*#DroptopSize#)
HighlightCutout=(0*#DroptopSize#)
HighlightXOffset=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownMenuLandingHeight=(17*#DroptopSize#)
ActionButtonOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
BlockSize=(#DropdownMenuWidth#/6)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=0,0,0
ChamLumB=255,255,255

ChamBG1=80,51,72
ChamBG2=92,54,76
ChamBG3=104,55,76
ChamFG1=255,255,255
ChamFG2=255,109,162

BGColor1=80,51,72
BGColor2=80,51,72
BGColor3=80,51,72
SuperColor=255,109,162
SuperColor2=80,51,72
TopBarFontColor1=255,109,162
TopBarFontColor2=80,51,72
ToolbarBG1=80,51,72
ToolbarHL=255,109,162
TopBarHL=255,109,162
TopBarHomeIconColor=255,109,162
AssistantIconTint=255,109,162
AssistantIconTint2=80,51,72
TopButtonGreyscale=0
BorderTopColor=25,25,25,(55*(#BGOpacity1#/255))
BorderBottomColor=0,0,0,(26*(#BGOpacity1#/255))
LuminosityOffset=255,255,255,0
SliderTextColor=#SuperColor2#
TopBarSolidColor=0
DropdownSliderColor=#ToolbarHL#
IconTint=255,255,255
Greyscale=0
PresetColor=0
LockPresetColor=0
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
BGOpacity2=76.5
ToolbarOpacity1=255
ToolbarHLO=255
TopBarHLO=255
ToolbarHLO2Offset=0
TopBarHLO2Offset=0
ToolbarHLO2=55
TopBarHLO2=55

DismissOpacity=#BGOpacity1#

BlurType0=Blur
BlurType1=Acrylic
BlurTypeNum=0

TopBarBlurType=[#BlurType[#BlurTypeNum]]

TopBarBlurAction0=!HideBlur
TopBarBlurAction1=!ShowBlur
TopBarBlurActionNum=0

BatteryOutlineOpacity=#TitleOpacity#
BatteryFillOpacity=255

;---

ShadowsON=0

TopBarShadow0=None
TopBarShadow1=All

DropdownShadow0=None
DropdownShadow1=All

;-------------------------
; Font

BorderOpacity=0
HoverOpacity=25
FontWeight=400
DegreeSymbol=°
PercentSymbol=%
PowerSymbol=↯
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
StrokeWidth2=(2*#DroptopSize#)
TopBarStrokeWidth=(2*#DroptopSize#)
TimeStrokeWidth=(2*#DroptopSize#)
StrokeOpacity1=225
StrokeOpacity2=255
TopBarStrokeOpacity=255
StrokeColor1=#ToolbarHL#,#StrokeOpacity1#
StrokeColor2=#ToolbarHL#,#StrokeOpacity2#
TopBarStrokeColor=#ToolbarHL#
Corner0=1
Corner1=10
BGCorner=([#Corner[#RoundedCorners]]*#DroptopSize#)
HLCorner=0
TopBarCorner=(#BGCorner#+(3*#DroptopSize#))
TopGradientCorner=#TopBarCorner#
HLContainerCorner=0
RoundedCorners=1
DividerShape=Rectangle (#StrokeWidth2#+1),(1*#DroptopSize#),(#DropdownMenuWidth#-(#StrokeWidth2#*2)),(2*#DroptopSize#),(0*#DroptopSize#) | Fill Color #SuperColor#,40 | StrokeWidth 0

HomeShape=Rectangle #TopBarObjectXOffset#,#TopBarCutout#,[Home:W],(#TopHeight#-(#TopBarCutout#*2)),#HLCorner# | StrokeWidth 0 | Stroke Color #BGColor1# | Skew #TopBarSkew#,0 | Extend HomeFillColor#HideOptionalShapes#

FlatTopShape=Rectangle #DropdownCutout#,0,((#DropdownMenuWidth#+2-(#DropdownCutout#*2))*#DropdownMenuFlatTop#),(#BGCorner#*#DropdownMenuFlatTop#),0 | Fill Color 255,55,55 | StrokeWidth 0

;-------------------------
; Chameleon settings

ChamBGColor1=[ChamBG1]
ChamBGColor2=[ChamBG1]
ChamBGColor3=[ChamBG1]
ChamToolbarBG1=[ChamBG1]
ChamToolbarHL=[ChamFG2]
ChamTopBarHL=[ChamFG2]
ChamSuperColor=[ChamFG2]
ChamSuperColor2=[ChamBG1]
ChamTopBarFontColor1=[ChamFG2]
ChamTopBarFontColor2=[ChamBG1]
ChamStrokeColor1=[ChamFG2],#StrokeOpacity1#
ChamStrokeColor2=[ChamFG2],#StrokeOpacity2#
ChamTopBarStrokeColor=[ChamFG2]
ChamTopBarHomeIconColor=[ChamFG2]
ChamAssistantIconTint=#ChamTopBarFontColor1#
ChamAssistantIconTint2=#ChamTopBarFontColor2#
ChamBatteryFillColor=[ChamFG2]
ChamLightIntensity=255
ChamDarkIntensity=255
ChamLumThreshold=0.5

BLANK=80,51,72

;-------------------------
