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
AltFont8=1
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
TopBarAntiAlias=1
TopBarObjectXOffset=((8*#DroptopSize#)-((8*#DroptopSize#)%1))
TitlePadding="((8*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((8*#DroptopSize#)+([#TitleSpaOffset[#ThemeNum]]*#DroptopSize#)),0"
TopBarTextYOffset=((0*#DroptopSize#)+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
TopBarSysIconYOffset=(-1*#DroptopSize#)
NotificationOffset=(0*#DroptopSize#)
SysIconTextOffset=((30*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
SysBatteryIconOffset=(3*#DroptopSize#)
SysBatteryTextOffset=(8*#DroptopSize#)
SysTextYPadding=((0*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
SysTextWPadding=(6*#DroptopSize#)
SysAppWPadding=(0*#DroptopSize#)
TopBarGradientAngle=90
HideTopBarGradient=1
BorderTopH=0
BorderBottomH=(2*#DroptopSize#)
TitleCase=None
HideOptionalShapes=1
HighlightOffsetY=((0*#DroptopSize#)-((0*#DroptopSize#)%1))
HighlightOffsetH=(0*#DroptopSize#)
TopBarSkewON=0
TopBarSkew=(-20*#TopBarSkewON#)
TopBarIconHOffset=((0*#DroptopSize#)+([#IconSizeOffset[#ThemeNum]]*#DroptopSize#))
TopBarCutout=(0*#DroptopSize#)
TopGradientCutout=#TopBarCutout#
AutohideSlideRate=(2*#DroptopSize#)
AutohideFadeRate=1.75

;-------------------------------------------------------------------------------------

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
DropdownIconXoffset=(5*#DroptopSize#)
DropdownIconYoffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
DropdownTextOffset=(4*#DroptopSize#)
DropdownItemYOffset=((4*#DroptopSize#)-((4*#DroptopSize#)%1))
DropdownPadding=(28*#DroptopSize#)
DropdownPadding2=(20*#DroptopSize#)
DropdownPaddingY=((1*(([#AltFont[#LanguageNum]]-1)*-1))+([#FontYposOffset[#ThemeNum]]*#DroptopSize#))
DropdownHLSkew=0
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
MiniMenuWidth=(180*#DroptopSize#)
DialogMenuYOffset=(3*#DroptopSize#)
NoIconPadding=(3*#DroptopSize#)
SystemTrayMenuOffset=(2*#DroptopSize#)
SystemTrayObjectOffset=(0*#DroptopSize#)
ArrowHighlightW=((21*#DroptopSize#)-((21*#DroptopSize#)%1))
ArrowXOffset=(0*#DroptopSize#)
ArrowXOffsetTray=(-2*#DroptopSize#)
ArrowXOffsetRTL=(1*#DroptopSize#)
ArrowStyle=4
DropdownAntiAlias=#TopBarAntiAlias#
IconAlpha=255
DropdownMenuFlatTop=1
SubMenuXOffset=(3*#DroptopSize#)
DropdownCutout=(1*#DroptopSize#)
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

ChamBG1=251,251,251
ChamBG2=254,254,254
ChamBG3=254,254,254
ChamFG1=16,16,16
ChamFG2=87,87,87

BGColor1=255,255,255
BGColor2=255,255,255
BGColor3=255,255,255
SuperColor=0,0,0
SuperColor2=255,255,255
TopBarFontColor1=0,0,0
TopBarFontColor2=255,255,255
ToolbarBG1=255,255,255
ToolbarHL=0,0,0
TopBarHL=0,0,0
TopBarHomeIconColor=0,0,0
AssistantIconTint=255,255,255
AssistantIconTint2=255,255,255
TopButtonGreyscale=1
BorderTopColor=25,25,25,(55*(#BGOpacity1#/255))
BorderBottomColor=0,0,0,255
LuminosityOffset=255,255,255,0
SliderTextColor=#SuperColor2#
TopBarSolidColor=0
DropdownSliderColor=#ToolbarHL#
IconTint=255,255,255
Greyscale=1
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
BGOpacity2=115
ToolbarOpacity1=255
ToolbarHLO=255
TopBarHLO=255
ToolbarHLO2Offset=125
TopBarHLO2Offset=125
ToolbarHLO2=100
TopBarHLO2=100

DismissOpacity=#BGOpacity1#

BlurType0=Blur
BlurType1=Acrylic
BlurTypeNum=1

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

BorderOpacity=25
HoverOpacity=35
FontWeight=600
DegreeSymbol=
PercentSymbol=p
PowerSymbol=
MusicSymbol="#NotificationPlaying#"
MailSymbol="#NotificationMail#"
DismissFontSize=#TopBarFontSize#
DismissW=(150*#DroptopSize#)
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
StrokeOpacity1=155
StrokeOpacity2=255
TopBarStrokeOpacity=0
StrokeColor1=65,109,217,155
StrokeColor2=0,0,0,#StrokeOpacity2#
TopBarStrokeColor=255,255,255,0
Corner0=0
Corner1=6
BGCorner=([#Corner[#RoundedCorners]]*#DroptopSize#)
HLCorner=(0*#DroptopSize#)
HLContainerCorner=0
RoundedCorners=0
TopBarCorner=(0*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DividerShape=Rectangle (#StrokeWidth2#+2),(1*#DroptopSize#),(#DropdownMenuWidth#-(#StrokeWidth2#*2)),(0*#DroptopSize#),(0*#DroptopSize#) | Fill Color 0,0,0,0 | StrokeWidth (2*#DroptopSize#) | StrokeDashes 1,1 | Stroke Color #SuperColor#,125

HomeShape=Rectangle #TopBarObjectXOffset#,#TopBarCutout#,[Home:W],(#TopHeight#-(#TopBarCutout#*2)),#HLCorner# | StrokeWidth 0 | Stroke Color #BGColor1# | Skew #TopBarSkew#,0 | Extend HomeFillColor#HideOptionalShapes#

FlatTopShape=Rectangle #DropdownCutout#,0,((#DropdownMenuWidth#+2-(#DropdownCutout#*2))*#DropdownMenuFlatTop#),(#BGCorner#*#DropdownMenuFlatTop#),0 | Fill Color 255,55,55 | StrokeWidth 0

;-------------------------
; Chameleon settings

ChamBGColor1=[ChamLumA],[ChamLumA],[ChamLumA]
ChamBGColor2=[ChamLumA],[ChamLumA],[ChamLumA]
ChamBGColor3=[ChamLumA],[ChamLumA],[ChamLumA]
ChamToolbarBG1=[ChamLumA],[ChamLumA],[ChamLumA]
ChamToolbarHL=65,109,217
ChamTopBarHL=65,109,217
ChamSuperColor=[ChamLumB],[ChamLumB],[ChamLumB]
ChamSuperColor2=255,255,255
ChamTopBarFontColor1=[ChamLumB],[ChamLumB],[ChamLumB]
ChamTopBarFontColor2=255,255,255
ChamStrokeColor1=0,0,0,#StrokeOpacity1#
ChamStrokeColor2=0,0,0,#StrokeOpacity2#
ChamTopBarStrokeColor=[ChamFG2]
ChamTopBarHomeIconColor=[ChamLumB],[ChamLumB],[ChamLumB]
ChamAssistantIconTint=255,255,255
ChamAssistantIconTint2=255,255,255
ChamBatteryFillColor=[ChamLumB],[ChamLumB],[ChamLumB]
ChamLightIntensity=255
ChamDarkIntensity=255
ChamLumThreshold=0.5

BLANK=255,255,255

;-------------------------
