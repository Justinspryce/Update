[Variables]

; --------------------------
; Theme Variables
; --------------------------

IconPack=8bit

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
AltFont14=1
AltFont15=0
AltFont16=0
AltFont17=1
AltFont18=1

;-------------------------------------------------------------------

TopBarBlur=1
TopBarFontSize=((12*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
TitleOpacity=255
TopBarAntiAlias=0
TopBarObjectXOffset=((8*#DroptopSize#)-((8*#DroptopSize#)%1))
TitlePadding="((10*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((3*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((6*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((1*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(0*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((30*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(3*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
SysTextYPadding=((3*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(6*#DroptopSize#)
SysAppWPadding=(0*#DroptopSize#)
TopBarGradientAngle=90
HideTopBarGradient=1
BorderTopH=0
BorderBottomH=0
TitleCase=Upper
HideOptionalShapes=1
HighlightOffsetY=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
HighlightOffsetH=(1*#DroptopSize#)
TopBarSkewON=0
TopBarSkew=(-20*#TopBarSkewON#)
TopBarIconHOffset=((0*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(1*#DroptopSize#)
TopGradientCutout=#TopBarCutout#
AutohideSlideRate=(2*#DroptopSize#)
AutohideFadeRate=4

;----------------------------------------------------------------------------------

DropdownBlur=1
DropdownBlurAction=ShowBlur
DropdownMenuWidth=((305*#DroptopSize#)-((305*#DroptopSize#)%1))
DropdownMenuHeight=((22*#DroptopSize#)-((22*#DroptopSize#)%1))
DropdownMenuFontSize=((10*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
DropdownItemOpacity=255
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(-2*#DroptopSize#)
DropdownIconPadding=((#DropdownMenuHeight#-#IconH#)/2)
DropdownIconSpacing=0
DropdownIconXoffset=(8*#DroptopSize#)
DropdownIconYoffset=((4*#DroptopSize#)-((4*#DroptopSize#)%1))
DropdownTextOffset=(2*#DroptopSize#)
DropdownItemYOffset=((3*#DroptopSize#)-((3*#DroptopSize#)%1))
DropdownPadding=(32*#DroptopSize#)
DropdownPadding2=(20*#DroptopSize#)
DropdownPaddingY=(((2*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(215*#DroptopSize#)
DialogMenuYOffset=(3*#DroptopSize#)
NoIconPadding=(6*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(15*#DroptopSize#)
ArrowHighlightW=((23*#DroptopSize#)-((23*#DroptopSize#)%1))
ArrowXOffset=(-2*#DroptopSize#)
ArrowXOffsetTray=(0*#DroptopSize#)
ArrowXOffsetRTL=(2*#DroptopSize#)
ArrowStyle=5
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=0
SubMenuXOffset=(6*#DroptopSize#)
DropdownCutout=(1*#DroptopSize#)
HighlightCutout=(0*#DroptopSize#)
HighlightXOffset=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
DropdownMenuLandingHeight=(17*#DroptopSize#)
ActionButtonOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
BlockSize=(#DropdownMenuWidth#/6)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=1
ChamLumA=0,0,0
ChamLumB=255,255,255

ChamBG1=99,116,144
ChamBG2=140,153,174
ChamBG3=148,174,196
ChamFG1=255,255,255
ChamFG2=255,255,255

BGColor1=154,207,130
BGColor2=154,207,130
BGColor3=154,207,130
SuperColor=21,30,21
SuperColor2=230,255,214
TopBarFontColor1=21,30,21
TopBarFontColor2=230,255,214
ToolbarBG1=230,255,214
ToolbarHL=49,105,82
TopBarHL=49,105,82
TopBarHomeIconColor=21,30,21
AssistantIconTint=#TopBarFontColor1#
AssistantIconTint2=#TopBarFontColor2#
TopButtonGreyscale=0
BorderTopColor=55,55,55,(55*(#BGOpacity1#/255))
BorderBottomColor=55,55,55,(26*(#BGOpacity1#/255))
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

BGOpacity1=155
BGOpacity2=76.5
ToolbarOpacity1=155
ToolbarHLO=155
TopBarHLO=155
ToolbarHLO2Offset=0
TopBarHLO2Offset=0
ToolbarHLO2=155
TopBarHLO2=155

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
PercentSymbol="%"
PowerSymbol=+
MusicSymbol="#NotificationPlaying#"
MailSymbol="#NotificationMail#"
DismissFontSize=#TopBarFontSize#
DismissW=(250*#DroptopSize#)
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
StrokeColor2=#SuperColor#,#StrokeOpacity2#
TopBarStrokeColor=#SuperColor#
Corner0=1
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

ChamBGColor1=154,207,130
ChamBGColor2=154,207,130
ChamBGColor3=154,207,130
ChamToolbarBG1=230,255,214
ChamToolbarHL=49,105,82
ChamTopBarHL=49,105,82
ChamSuperColor=21,30,21
ChamSuperColor2=230,255,214
ChamTopBarFontColor1=21,30,21
ChamTopBarFontColor2=230,255,214
ChamStrokeColor1=49,105,82,#StrokeOpacity1#
ChamStrokeColor2=21,30,21,#StrokeOpacity2#
ChamTopBarStrokeColor=21,30,21
ChamTopBarHomeIconColor=21,30,21
ChamAssistantIconTint=#ChamTopBarFontColor1#
ChamAssistantIconTint2=#ChamTopBarFontColor2#
ChamBatteryFillColor=21,30,21
ChamLightIntensity=255
ChamDarkIntensity=255
ChamLumThreshold=0.5

BLANK=154,207,130

;-------------------------
