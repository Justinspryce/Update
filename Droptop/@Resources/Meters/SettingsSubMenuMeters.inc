[Rainmeter]
OnRefreshAction=[!ShowMeterGroup [#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount]][!ShowMeterGroup F[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]][!ShowMeterGroup D[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]DividerCount]][!DisableMouseActionGroup "LeftMouseDownAction|MouseOverAction|MouseLeaveAction" #SettingsMenuBlock#BackArrow][!Redraw]
OnFocusAction=[!SetVariable FocusedGroup #FocusGroup# "Droptop\Other\BackgroundProcesses"][!Update "Droptop\Other\BackgroundProcesses"]
OnUnfocusAction=[!SetVariable FocusedGroupPrev #FocusGroup# "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
MouseActionCursor=Arrow
SkinWidth=(#DropdownMenuWidth#+2)
RightMouseDownAction=[]
Blur=#DropdownBlur#
Update=-1

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=0

[Metadata]
Name=Droptop Four
Author=Cariboudjan / Thomas Sven Whittaker
Information=The frogurt is also cursed
License=Creative Commons Attribution-Non-Commercial-Share Alike 3.0

[Variables]
@Include=#@#GlobalVar\Control.inc
@Include1=#@#GlobalVar\UserSettings.inc
@Include2=#@#GlobalVar\ToolbarSettings.inc
@Include3=#@#Themes\#ThemeNum#.inc
@Include4=#@#GlobalVar\Supporter.inc
@Include5=#@#GlobalVar\Languages\[#Language[#LanguageNum]].inc
@Include6=#@#GlobalVar\ThemeSettings.inc
@Include7=#@#GlobalVar\SettingsMenuOptions.inc
@Include8=#@#GlobalVar\TopBarPositions.inc

NumberOfItems=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]ItemCount]
NumberOfFolders=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount]
NumberOfDividers=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]DividerCount]

ToolbarNum=99
ContextSelect=99
BoxSize=0

FocusGroup=DropdownMenus

ReservedPadding=#DropdownPadding#

;-----------------------------------
Padding0=#DropdownPadding#,#DropdownPaddingY#,#DropdownPadding2#,(#DropdownPaddingY#*-1)
Padding1=(#DropdownPadding#*2),#DropdownPaddingY#,#NoIconPadding#,(#DropdownPaddingY#*-1)
;---
Padding0B=#DropdownPadding#,#DropdownPaddingY#,(#NoIconPadding#*2),(#DropdownPaddingY#*-1)
Padding1B=(#NoIconPadding#*2),#DropdownPaddingY#,#DropdownPadding#,(#DropdownPaddingY#*-1)
;-----------------------------------

1Icon=1
2Icon=2
3Icon=3
4Icon=4
5Icon=5
6Icon=6
7Icon=7
8Icon=8
9Icon=9
10Icon=10
11Icon=11
12Icon=12
13Icon=13
14Icon=14
15Icon=15
16Icon=16
17Icon=17
18Icon=18
19Icon=19
20Icon=20
21Icon=21
22Icon=22

;----------------------------------------------------

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=#DropdownBlur#
Type=[#BlurType[#BlurTypeNum]]
DynamicVariables=1
Border=[#Shadows[#DropdownMenuShadow]]

[NextBlock]
Measure=Calc
Formula=(#SettingsMenuBlock#+1)
UpdateDivider=-1

[MeasureSliders1]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait #FolderMouseOverTime#|FolderMouseOver#FolderMode#
FolderMouseOver1=[!HideGroup SettingsMenuInput][!DeactivateConfigGroup SettingsMenuInput][!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!WriteKeyValue Variables SettingsMenuNumber "#SettingsMenuNumber#.#CurrentFolder#" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuIndex#SettingsMenuBlock# #CurrentFolder# "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex #CurrentFolder# "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!HideGroup SM[NextBlock]][!DeactivateConfigGroup SM[NextBlock]][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Move (#CURRENTCONFIGX#+#DropdownMenuWidth#+#SubMenuXOffset#) (#CURRENTCONFIGY#+[#CurrentFolder#:Y]-[1:Y]) "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!#Show# "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!UpdateMeter HighlightSelected][!Redraw]
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
StringAlign=#TextDirection#Center
FontColor=#SuperColor#,#DropdownItemOpacity#
FontFace=[#FontName[#ThemeNum][#AltFont[#LanguageNum]]]
FontSize=#DropdownMenuFontSize#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
Text=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#Icon]]
LeftMouseDownAction=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#Icon].Action]
X=(1+(#DropdownMenuWidth#*#RTLText#))
Y=R
W=(#DropdownMenuWidth#-(#NoIconPadding#*2)-#DropdownPadding#+((#DropdownPadding#-#NoIconPadding#)*#HideIcons#))
H=#DropdownMenuHeight#
FontWeight=#FontWeight#
Padding=[#Padding[#RTLText]B]
AntiAlias=#DropdownAntiAlias#
MouseOverAction=[!SetVariable CurrentFolder #CURRENTSECTION#][!UpdateMeasure MeasureSliders#AnimationOFF#][!CommandMeasure MeasureSliders#AnimationOFF# "Execute 1"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor2*#,#HLTextOpacity#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*SuperColor2*#,(#HLTextOpacity#-(#HLTextOpacity#*#HideIcons#))"][!SetOption #CURRENTSECTION#Folder FontColor #*SuperColor2*#][!SetOption #CURRENTSECTION# FontColor "#*SuperColor2*#,#HLTextOpacity#"][!ShowMeterGroup Highlight][!SetOptionGroup Highlight Y [#CURRENTSECTION#:Y]][!SetOptionGroup Highlight W [#CURRENTSECTION#:W]][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor*#,#DropdownItemOpacity#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*SuperColor*#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))"][!SetOption #CURRENTSECTION#Folder FontColor #*SuperColor*#][!SetOption #CURRENTSECTION# FontColor "#*SuperColor*#,#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
ClipString=1
Group=Items

[IconStyle]
ImageName=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].Icon]
ImageTint=#SuperColor#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))
ImageAlpha=[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber].[##CURRENTSECTION#].IconAlpha]
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#HighlightXOffset#-(#DropdownIconPadding#*2))*#RTLText#))
Y=#DropdownIconSpacing#R
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Greyscale=#Greyscale#
Hidden=1
DynamicVariables=1
Group=Items

@Include=#@#Meters\ArrowStyle\ArrowStyle#ArrowStyle#.ini

[CheckmarkStyle]
ImageTint=#SuperColor#
ImageName=#@#FixedIcons\#IconSize#\checkmark.png
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#HighlightXOffset#-(#DropdownIconPadding#*2))*#RTLText#))
Y=#DropdownIconSpacing#R
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Greyscale=#Greyscale#
DynamicVariables=1
Group=Items

[BackgroundStyle]
LeftMouseDownAction=[]
UpdateDivider=-1

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownCutout#,#DropdownCutout#,(#DropdownMenuWidth#+2-(#DropdownCutout#*2)),(#DropdownMenuHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)),#BGCorner# | Fill Color #ToolbarBG1#,(#ToolbarOpacity1#<1?1:#ToolbarOpacity1#) | StrokeWidth #StrokeWidth2# | Stroke Color #StrokeColor2#
UpdateDivider=-1

;----------------------------------------------------
; Item highlight

[HighlightContainer]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle (#DropdownCutout#+#HighlightCutout#),(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#),(#DropdownMenuWidth#+2-(#DropdownCutout#*2)-(#HighlightCutout#*2)),(#DropdownMenuHeight#*#NumberOfItems#+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)),#HLContainerCorner# | Fill Color 255,0,0 | StrokeWidth 0
UpdateDivider=-1

[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownCutout#+#HighlightXOffset#),0,((#DropdownMenuWidth#-(#DropdownCutout#*2))-((#DropdownMenuWidth#-(#DropdownCutout#*2))%1)-(#HighlightXOffset#*2)),#DropdownMenuHeight#,#HLCorner# | Fill Color #ToolbarHL#,#ToolbarHLO# | StrokeWidth 0
UpdateDivider=-1
Group=Highlight
Hidden=1
X=1
Container=HighlightContainer

[HighlightSelected]
Meter=Shape
Shape=Rectangle (((#DropdownCutout#+#HighlightXOffset#)+(#DropdownMenuWidth#-(#DropdownCutout#*2)-(#HighlightXOffset#*2))-#ArrowHighlightW#)*((#RTLText#-1)*-1)+((#DropdownCutout#+#HighlightXOffset#)*#RTLText#)),(#StrokeWidth#-#SelectedSizeOffset#),#ArrowHighlightW#,(#DropdownMenuHeight#-(#StrokeWidth#*2)+(#SelectedSizeOffset#*2)),#HLCorner# | Fill Color #ToolbarHL#,#ToolbarHLO2# | StrokeWidth #StrokeWidth# | Stroke Color #StrokeColor1# | Skew #DropdownHLSkew#,0
X=1
Y=#HighlightSelectedY#
Group=HighlightSelected
DynamicVariables=1
Hidden=1
Container=HighlightContainer

;----------------------------------------------------

[Divider1]
Meter=Shape
Shape=#DividerShape#
Group=D1 | D2 | D3 | D4 | D5
Hidden=1

[Divider2]
Meter=Shape
Shape=#DividerShape#
Group=D2 | D3 | D4 | D5
Hidden=1

[Divider3]
Meter=Shape
Shape=#DividerShape#
Group=D3 | D4 | D5
Hidden=1

[Divider4]
Meter=Shape
Shape=#DividerShape#
Group=D4 | D5
Hidden=1

[Divider5]
Meter=Shape
Shape=#DividerShape#
Group=D5
Hidden=1

;----------------------------------------------------
; Item Names
;----------------------------------------------------

[1]
Meter=String
MeterStyle=InfoStyle
Y=((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#)
Hidden=1
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[2]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[3]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[4]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[5]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[6]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[7]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[8]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[9]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[10]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[11]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[12]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[13]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[14]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[15]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[16]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=16 | 17 | 18 | 19 | 20 | 21 | 22 | Item

[17]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=17 | 18 | 19 | 20 | 21 | 22 | Item

[18]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=18 | 19 | 20 | 21 | 22 | Item

[19]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=19 | 20 | 21 | 22 | Item

[20]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=20 | 21 | 22 | Item

[21]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=21 | 22 | Item

[22]
Meter=String
MeterStyle=InfoStyle
Hidden=1
Group=22 | Item

;----------------------------------------------------

[Slider1]
Meter=Shape

[Slider2]
Meter=Shape

[Slider3]
Meter=Shape

[Slider4]
Meter=Shape

[SliderText1]
Meter=String

[SliderText2]
Meter=String

[SliderText3]
Meter=String

[SliderText4]
Meter=String

;----------------------------------------------------
; Icons
;----------------------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#HighlightXOffset#-(#DropdownIconPadding#*2))*#RTLText#))
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[2Icon]
Meter=Image
MeterStyle=IconStyle
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[3Icon]
Meter=Image
MeterStyle=IconStyle
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[4Icon]
Meter=Image
MeterStyle=IconStyle
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[5Icon]
Meter=Image
MeterStyle=IconStyle
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[6Icon]
Meter=Image
MeterStyle=IconStyle
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[7Icon]
Meter=Image
MeterStyle=IconStyle
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[8Icon]
Meter=Image
MeterStyle=IconStyle
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[9Icon]
Meter=Image
MeterStyle=IconStyle
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[10Icon]
Meter=Image
MeterStyle=IconStyle
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[11Icon]
Meter=Image
MeterStyle=IconStyle
Group=11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[12Icon]
Meter=Image
MeterStyle=IconStyle
Group=12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[13Icon]
Meter=Image
MeterStyle=IconStyle
Group=13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[14Icon]
Meter=Image
MeterStyle=IconStyle
Group=14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[15Icon]
Meter=Image
MeterStyle=IconStyle
Group=15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[16Icon]
Meter=Image
MeterStyle=IconStyle
Group=16 | 17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[17Icon]
Meter=Image
MeterStyle=IconStyle
Group=17 | 18 | 19 | 20 | 21 | 22 | ItemIcon

[18Icon]
Meter=Image
MeterStyle=IconStyle
Group=18 | 19 | 20 | 21 | 22 | ItemIcon

[19Icon]
Meter=Image
MeterStyle=IconStyle
Group=19 | 20 | 21 | 22 | ItemIcon

[20Icon]
Meter=Image
MeterStyle=IconStyle
Group=20 | 21 | 22 | ItemIcon

[21Icon]
Meter=Image
MeterStyle=IconStyle
Group=21 | 22 | ItemIcon

[22Icon]
Meter=Image
MeterStyle=IconStyle
Group=22 | ItemIcon

;----------------------------------------------------
; Folders
;----------------------------------------------------

[FolderBlock]
Meter=Image
X=1
Y=[1:Y]
W=#DropdownMenuWidth#
H=(#DropdownMenuHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])
LeftMouseDownAction=[!DeactivateConfigGroup SettingsMenuInput][!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!WriteKeyValue Variables SettingsMenuNumber "#SettingsMenuNumber#.#CurrentFolder#" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuIndex#SettingsMenuBlock# #CurrentFolder# "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex #CurrentFolder# "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]\SettingsMenu[NextBlock].ini"][!HideGroup SM[NextBlock]][!DeactivateConfigGroup SM[NextBlock]][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!Move (#CURRENTCONFIGX#+#DropdownMenuWidth#+#SubMenuXOffset#) (#CURRENTCONFIGY#+[#CurrentFolder#:Y]-[1:Y]) "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!#Show# "Droptop\Other\SettingsMenu\SettingsMenu[NextBlock]"][!UpdateMeter HighlightSelected][!Redraw]
MouseOverAction=[!SetVariable FolderMode 1]
MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1

;----------------------------------------------------
; Arrows
;----------------------------------------------------

[1Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Y=[1Icon:Y]
Group=F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[2Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[3Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[4Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[5Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[6Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[7Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[8Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[9Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[10Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[11Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[12Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[13Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[14Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F14 | F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[15Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F15 | F16 | F17 | F18 | F19 | F20 | F21 | F22

[16Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F16 | F17 | F18 | F19 | F20 | F21 | F22

[17Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F17 | F18 | F19 | F20 | F21 | F22

[18Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F18 | F19 | F20 | F21 | F22

[19Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F19 | F20 | F21 | F22

[20Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F20 | F21 | F22

[21Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F21 | F22

[22Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Hidden=1
Group=F22

;-------------------------

[LocationText]

[ScrollbarTop]

[Size]

[ScrollH]

[ScrollbarScript]

[CurrentPos]

[OpenFolder]

[DownArrow]

[UpArrow]

[BottomString]