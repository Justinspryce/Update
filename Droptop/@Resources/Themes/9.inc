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

TopBarBlur=1
TopBarFontSize=((13*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
TitleOpacity=255
TopBarAntiAlias=0
TopBarObjectXOffset=((8*#DroptopSize#)-((8*#DroptopSize#)%1))
TitlePadding="((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((0*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(0*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((30*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(3*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
SysTextYPadding=((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(6*#DroptopSize#)
SysAppWPadding=(0*#DroptopSize#)
TopBarGradientAngle=90
HideTopBarGradient=1
BorderTopH=(2*#DroptopSize#)
BorderBottomH=(2*#DroptopSize#)
TitleCase=None
HideOptionalShapes=1
HighlightOffsetY=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
HighlightOffsetH=(2*#DroptopSize#)
TopBarSkewON=0
TopBarSkew=(-20*#TopBarSkewON#)
TopBarIconHOffset=((0*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(0*#DroptopSize#)
TopGradientCutout=#TopBarCutout#
AutohideSlideRate=(2*#DroptopSize#)
AutohideFadeRate=4

;----------------------------------------------------------------------------------

DropdownBlur=1
DropdownBlurAction=ShowBlur
DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownMenuHeight=((25*#DroptopSize#)-((25*#DroptopSize#)%1))
DropdownMenuFontSize=((13*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
DropdownItemOpacity=255
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(-2*#DroptopSize#)
DropdownIconPadding=((#DropdownMenuHeight#-#IconH#)/2)
DropdownIconSpacing=0
DropdownIconXoffset=(3*#DroptopSize#)
DropdownIconYoffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownTextOffset=(2*#DroptopSize#)
DropdownItemYOffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))	
DropdownPadding=(26*#DroptopSize#)
DropdownPadding2=(20*#DroptopSize#)
DropdownPaddingY=(((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(185*#DroptopSize#)
DialogMenuYOffset=(4*#DroptopSize#)
NoIconPadding=(3*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(0*#DroptopSize#)
ArrowHighlightW=((20*#DroptopSize#)-((20*#DroptopSize#)%1))
ArrowXOffset=(0*#DroptopSize#)
ArrowXOffsetTray=(-1*#DroptopSize#)
ArrowXOffsetRTL=(0*#DroptopSize#)
ArrowStyle=4
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=1
SubMenuXOffset=(4*#DroptopSize#)
DropdownCutout=(1*#DroptopSize#)
HighlightCutout=(0*#DroptopSize#)
HighlightXOffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownMenuLandingHeight=(17*#DroptopSize#)
ActionButtonOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
BlockSize=(#DropdownMenuWidth#/6)

;-------------------------
; Colors

ChamLum1=1
ChamLum2=0
ChamLumA=255,255,255
ChamLumB=0,0,0

ChamBG1=219,179,200
ChamBG2=251,212,220
ChamBG3=16,26,38
ChamFG1=68,79,95
ChamFG2=74,60,65

BGColor1=192,192,192
BGColor2=192,192,192
BGColor3=192,192,192
SuperColor=0,0,0
SuperColor2=255,255,255
TopBarFontColor1=0,0,0
TopBarFontColor2=255,255,255
ToolbarBG1=192,192,192
ToolbarHL=0,0,128
TopBarHL=0,0,128
TopBarHomeIconColor=0,0,0
AssistantIconTint=#TopBarFontColor1#
AssistantIconTint2=#TopBarFontColor2#
TopButtonGreyscale=0
BorderTopColor=255,255,255,(95*(#BGOpacity1#/255))
BorderBottomColor=0,0,0,(95*(#BGOpacity1#/255))
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
BGOpacity2=76.5
ToolbarOpacity1=255
ToolbarHLO=255
TopBarHLO=255
ToolbarHLO2Offset=0
TopBarHLO2Offset=0
ToolbarHLO2=85
TopBarHLO2=85

DismissOpacity=#BGOpacity1#

BlurType0=Blur
BlurType1=Acrylic
BlurTypeNum=0

TopBarBlurType=[#BlurType[#BlurTypeNum]]

TopBarBlurAction0=!HideBlur
TopBarBlurAction1=!ShowBlur
TopBarBlurActionNum=1

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
HoverOpacity=0
FontWeight=400
DegreeSymbol=°
PercentSymbol=%
PowerSymbol=+
MusicSymbol=♪
MailSymbol=✉
DismissFontSize=#TopBarFontSize#
DismissW=(155*#DroptopSize#)
SliderTextEffect=None
TopBarCharacterSpacing=0 | 0
DropdownCharacterSpacing=0 | 0
TopBarInlineShadow=

;-------------------------
; Shapes & backgrounds

SelectedSizeOffset=(0*#DroptopSize#)
StrokeWidth=(0*#DroptopSize#)
StrokeWidth2=(2*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TimeStrokeWidth=(2*#DroptopSize#)
StrokeOpacity1=0
StrokeOpacity2=255
TopBarStrokeOpacity=0
StrokeColor1=#ToolbarHL#,#StrokeOpacity1#
StrokeColor2=128,128,128,#StrokeOpacity2#
TopBarStrokeColor=#SuperColor#
Corner0=0
Corner1=6
BGCorner=([#Corner[#RoundedCorners]]*#DroptopSize#)
HLCorner=#BGCorner#
TopBarCorner=(0*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
HLContainerCorner=0
RoundedCorners=0
DividerShape=Rectangle (#StrokeWidth2#+1),(1*#DroptopSize#),(#DropdownMenuWidth#-(#StrokeWidth2#*2)),(2*#DroptopSize#),(0*#DroptopSize#) | Fill Color #SuperColor#,40 | StrokeWidth 0

HomeShape=Rectangle #TopBarObjectXOffset#,#TopBarCutout#,[Home:W],(#TopHeight#-(#TopBarCutout#*2)),#HLCorner# | StrokeWidth 0 | Stroke Color #BGColor1# | Skew #TopBarSkew#,0 | Extend HomeFillColor#HideOptionalShapes#

FlatTopShape=Rectangle #DropdownCutout#,0,((#DropdownMenuWidth#+2-(#DropdownCutout#*2))*#DropdownMenuFlatTop#),(#BGCorner#*#DropdownMenuFlatTop#),0 | Fill Color 255,55,55 | StrokeWidth 0

;-------------------------
; Chameleon settings

ChamBGColor1=192,192,192
ChamBGColor2=192,192,192
ChamBGColor3=192,192,192
ChamToolbarBG1=192,192,192
ChamToolbarHL=0,0,128
ChamTopBarHL=0,0,128
ChamSuperColor=0,0,0
ChamSuperColor2=255,255,255
ChamTopBarFontColor1=0,0,0
ChamTopBarFontColor2=255,255,255
ChamStrokeColor1=0,0,0,#StrokeOpacity1#
ChamStrokeColor2=0,0,0,#StrokeOpacity2#
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=0,0,0
ChamAssistantIconTint=#ChamTopBarFontColor1#
ChamAssistantIconTint2=#ChamTopBarFontColor2#
ChamBatteryFillColor=0,0,0
ChamLightIntensity=255
ChamDarkIntensity=255
ChamLumThreshold=0.5

BLANK=192,192,192

;-------------------------
