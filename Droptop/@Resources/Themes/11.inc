[Variables]

; --------------------------
; Theme Variables
; --------------------------

IconPack=Apple

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
TopBarFontSize=((11*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
TitleOpacity=255
TopBarAntiAlias=1
TopBarObjectXOffset=((12*#DroptopSize#)-((12*#DroptopSize#)%1))
TitlePadding="((10*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((0.5*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((10*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((0*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(0*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((28*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(2*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
BatteryShadow=1
SysTextYPadding=((0.5*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(6*#DroptopSize#)
SysAppWPadding=(2*#DroptopSize#)
TopBarGradientAngle=90
HideTopBarGradient=1
BorderTopH=0
BorderBottomH=0
TitleCase=None
HideOptionalShapes=1
HighlightOffsetY=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
HighlightOffsetH=(0*#DroptopSize#)
TopBarSkewON=0
TopBarSkew=(-20*#TopBarSkewON#)
TopBarIconHOffset=((-1*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(0*#DroptopSize#)
TopGradientCutout=#TopBarCutout#
AutohideSlideRate=(2*#DroptopSize#)
AutohideFadeRate=4

;----------------------------------------------------------------------------------

DropdownBlur=1
DropdownBlurAction=ShowBlur
DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownMenuHeight=((28*#DroptopSize#)-((28*#DroptopSize#)%1))
DropdownMenuFontSize=((11*#DroptopSize#)+([#FontSizeOffset[#ThemeNum]]*#DroptopSize#))
DropdownItemOpacity=255
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownMenuHeight#-#IconH#)/2)
DropdownIconSpacing=0
DropdownIconXoffset=(10*#DroptopSize#)
DropdownIconYoffset=((2*#DroptopSize#)-((2*#DroptopSize#)%1))
DropdownTextOffset=(1*#DroptopSize#)
DropdownItemYOffset=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
DropdownPadding=(36*#DroptopSize#)
DropdownPadding2=(30*#DroptopSize#)
DropdownPaddingY=(((1*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(185*#DroptopSize#)
DialogMenuYOffset=(3*#DroptopSize#)
NoIconPadding=(11*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(0*#DroptopSize#)
ArrowHighlightW=((23*#DroptopSize#)-((23*#DroptopSize#)%1))
ArrowXOffset=(0*#DroptopSize#)
ArrowXOffsetTray=(0*#DroptopSize#)
ArrowXOffsetRTL=(1*#DroptopSize#)
ArrowStyle=1
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=0
SubMenuXOffset=(6*#DroptopSize#)
DropdownCutout=(1*#DroptopSize#)
HighlightCutout=(0*#DroptopSize#)
HighlightXOffset=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
DropdownMenuLandingHeight=(17*#DroptopSize#)
ActionButtonOffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
BlockSize=(#DropdownMenuWidth#/6)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=0,0,0
ChamLumB=255,255,255

ChamBG1=12,15,22
ChamBG2=10,11,15
ChamBG3=15,17,23
ChamFG1=255,255,255
ChamFG2=255,255,255

BGColor1=12,15,22
BGColor2=10,11,15
BGColor3=15,17,23
SuperColor=255,255,255
SuperColor2=255,255,255
TopBarFontColor1=255,255,255
TopBarFontColor2=255,255,255
ToolbarBG1=0,0,0
ToolbarHL=0,125,255
TopBarHL=255,255,255
TopBarHomeIconColor=255,255,255
AssistantIconTint=255,255,255
AssistantIconTint2=255,255,255
TopButtonGreyscale=0
BorderTopColor=25,25,25,(92*(#BGOpacity1#/255))
BorderBottomColor=0,0,0,(43*(#BGOpacity1#/255))
LuminosityOffset=255,255,255,0
SliderTextColor=#SuperColor2#
TopBarSolidColor=1
DropdownSliderColor=255,255,255
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

; BatteryFillColor100=#TopBarFontColor1#
; BatteryFillColor101=233,86,70
; BatteryFillColor110=47,207,91
; BatteryFillColor111=47,207,91

BatteryFillColor100=#TopBarFontColor1#
BatteryFillColor101=233,86,70
BatteryFillColor110=47,207,91
BatteryFillColor111=47,207,91

BatteryColorMode=1

;-------------------------
; Opacities

BGOpacity1=185
BGOpacity2=76.5
ToolbarOpacity1=115
ToolbarHLO=255
TopBarHLO=45
ToolbarHLO2Offset=0
TopBarHLO2Offset=0
ToolbarHLO2=185
TopBarHLO2=45

DismissOpacity=#BGOpacity1#

BlurType0=Blur
BlurType1=Acrylic
BlurTypeNum=1

TopBarBlurType=Blur

TopBarBlurAction0=!HideBlur
TopBarBlurAction1=!ShowBlur
TopBarBlurActionNum=1

BatteryOutlineOpacity=128
BatteryFillOpacity=355

;---

ShadowsON=0

TopBarShadow0=None
TopBarShadow1=All

DropdownShadow0=None
DropdownShadow1=All

;-------------------------
; Font

BorderOpacity=15
HoverOpacity=15
FontWeight=400
DegreeSymbol=°
PercentSymbol=%
PowerSymbol=↯
MusicSymbol=♪
MailSymbol=✉
DismissFontSize=#TopBarFontSize#
DismissW=(170*#DroptopSize#)
SliderTextEffect=None
TopBarCharacterSpacing=0 | 0
DropdownCharacterSpacing=0 | 0
; TopBarInlineShadow=Shadow | 0 | (1.5*#DroptopSize#) | 3 | 0,0,0,105
TopBarInlineShadow=

;-------------------------
; Shapes & backgrounds

SelectedSizeOffset=(0*#DroptopSize#)
StrokeWidth=(0*#DroptopSize#)
StrokeWidth2=(1*#DroptopSize#)
TopBarStrokeWidth=(0*#DroptopSize#)
TimeStrokeWidth=(3*#DroptopSize#)
StrokeOpacity1=255
StrokeOpacity2=60
TopBarStrokeOpacity=0
StrokeColor1=#ToolbarHL#,#StrokeOpacity1#
StrokeColor2=0,0,0,#StrokeOpacity2#
TopBarStrokeColor=#SuperColor#
Corner0=0
Corner1=6
BGCorner=([#Corner[#RoundedCorners]]*#DroptopSize#)
HLCorner=#BGCorner#
TopBarCorner=(0*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
HLContainerCorner=0
RoundedCorners=1
DividerShape=Rectangle ((8*#DroptopSize#)+1),(1*#DroptopSize#),(#DropdownMenuWidth#-((8*#DroptopSize#)*2)),(1*#DroptopSize#),(0*#DroptopSize#) | Fill Color #SuperColor#,85 | StrokeWidth 0

HomeShape=Rectangle #TopBarObjectXOffset#,#TopBarCutout#,[Home:W],(#TopHeight#-(#TopBarCutout#*2)),#HLCorner# | StrokeWidth 0 | Stroke Color #BGColor1# | Skew #TopBarSkew#,0 | Extend HomeFillColor#HideOptionalShapes#

FlatTopShape=Rectangle #DropdownCutout#,0,((#DropdownMenuWidth#+2-(#DropdownCutout#*2))*#DropdownMenuFlatTop#),(#BGCorner#*#DropdownMenuFlatTop#),0 | Fill Color 255,55,55 | StrokeWidth 0

;-------------------------
; Chameleon settings

ChamBGColor1=[ChamBG1]
ChamBGColor2=[ChamBG2]
ChamBGColor3=[ChamBG3]
ChamToolbarBG1=[ChamLumA],[ChamLumA],[ChamLumA]
ChamToolbarHL=0,125,255
ChamTopBarHL=[ChamLumB],[ChamLumB],[ChamLumB]
ChamSuperColor=[ChamLumB],[ChamLumB],[ChamLumB]
ChamSuperColor2=255,255,255
ChamTopBarFontColor1=[ChamLumB],[ChamLumB],[ChamLumB]
ChamTopBarFontColor2=[ChamLumB],[ChamLumB],[ChamLumB]
ChamStrokeColor1=[ChamFG2],#StrokeOpacity1#
ChamStrokeColor2=0,0,0,#StrokeOpacity2#
ChamTopBarStrokeColor=[ChamFG2]
ChamTopBarHomeIconColor=[ChamLumB],[ChamLumB],[ChamLumB]
ChamAssistantIconTint=255,255,255
ChamAssistantIconTint2=255,255,255
ChamBatteryFillColor=[ChamLumB],[ChamLumB],[ChamLumB]
ChamLightIntensity=255
ChamDarkIntensity=245
ChamLumThreshold=0.6

BLANK=12,15,22

;-------------------------
