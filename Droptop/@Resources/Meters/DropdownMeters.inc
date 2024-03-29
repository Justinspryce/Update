[Rainmeter]
OnFocusAction=[!SetVariable FocusedGroup #FocusGroup# "Droptop\Other\BackgroundProcesses"][!UpdateMeasure CompareFocused "Droptop\Other\BackgroundProcesses"]
OnUnfocusAction=[!SetVariable FocusedGroupPrev #FocusGroup# "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
OnRefreshAction=[!Hide][!FadeDuration 105]
SkinWidth=(#DropdownMenuWidth#+2)
RightMouseDownAction=[]
MouseActionCursor=Arrow
Blur=#DropdownBlur#
Update=-1

[Variables]
MenuBlur=#DropdownBlur#
ScrollTracker=#MaxItem#
SelectedSizeOffset=0

FocusGroup=DropdownMenus

FolderMode=0

;-----------------------------------
Padding0=(#HideIcons#=1?#NoIconPadding#:#DropdownPadding#),#DropdownPaddingY#,#DropdownPadding2#,(#DropdownPaddingY#*-1)
Padding1=0,#DropdownPaddingY#,0,(#DropdownPaddingY#*-1)
;---
Padding0B=(#HideIcons#=1?#NoIconPadding#:#DropdownPadding#),#DropdownPaddingY#,#ArrowHighlightW#,(#DropdownPaddingY#*-1)
Padding1B=#ArrowHighlightW#,#DropdownPaddingY#,(#HideIcons#=1?#NoIconPadding#:#DropdownPadding#),(#DropdownPaddingY#*-1)
;-----------------------------------

;----------------------------------------------------
; Measures
;----------------------------------------------------

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=#DropdownBlur#
Type=[#BlurType[#BlurTypeNum]]
DynamicVariables=1
Border=[#DropdownShadow[#ShadowsON]]

[MeasureSliders1]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Wait #FolderMouseOverTime#|FolderMouseOver#FolderMode#
FolderMouseOver1=[!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [#CurrentFolder#:Y]][!WriteKeyValue Variables ToolbarNum #ToolbarNum# "#SKINSPATH#Droptop\Other\Toolbar01\Toolbar01.ini"][!WriteKeyValue Variables SelectedFolderY [#CURRENTSECTION#:Y] "#SKINSPATH#Droptop\Other\Toolbar01\Toolbar01.ini"][!WriteKeyValue Variables Toolbar01Loc "[mPath][mIndex#CurrentFolder#Name]" "#SKINSPATH#Droptop\Other\Toolbar01\Toolbar01.ini"][!HideGroup Toolbar0][!DeactivateConfigGroup Toolbar0][!ActivateConfig "Droptop\Other\Toolbar01"][!Move (#CURRENTCONFIGX#+#DropdownMenuWidth#+#SubMenuXOffset#) (#CURRENTCONFIGY#+[#CurrentFolder#:Y]-[1:Y]) "Droptop\Other\Toolbar01"][!#Show# "Droptop\Other\Toolbar01"][!Update "Droptop\Other\Toolbar01"][!UpdateMeter HighlightSelected][!Redraw]
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

[CalcFolderNum]
Measure=Calc
Formula=Clamp(([FolderCount]-(#ScrollTracker#-#MaxItem#)),0,#MaxItem#)
OnChangeAction=[!HideMeterGroup F20][!ShowMeterGroup F[CalcFolderNum]]
DynamicVariables=1

[ScrollCheck]
Measure=Calc
IfCondition=AnalyzeTotal = #ScrollTracker#
IfTrueAction=[!DisableMouseActionGroup "MouseScrollDownAction" ItemName]
IfFalseAction=[!EnableMouseActionGroup "MouseScrollDownAction" ItemName]
IfCondition2=#ScrollTracker# = #MaxItem#
IfTrueAction2=[!DisableMouseActionGroup "MouseScrollUpAction" ItemName]
IfFalseAction2=[!EnableMouseActionGroup "MouseScrollUpAction" ItemName]
DynamicVariables=1
UpdateDivider=-1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
FontColor=#SuperColor#,#DropdownItemOpacity#
FontFace=[#FontName[#ThemeNum][#AltFont[#LanguageNum]]]
FontSize=#DropdownMenuFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#

[ItemStyle]
StringAlign=#TextDirection#Center
MeasureName=mIndex#CURRENTSECTION#Name
LeftMouseDownAction=[!CommandMeasure mIndex#CURRENTSECTION#Name "Open"][!HideGroup Toolbars][!SetVariable ActiveToolbar 0 "Droptop\DropdownBar"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Toolbars "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
RightMouseDownAction=[!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!CommandMeasure mIndex#CURRENTSECTION#Name "ContextMenu"][!HideGroup Toolbars][!SetVariable ActiveToolbar 0 "Droptop\DropdownBar"][!HideMeter HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Toolbars "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MiddleMouseDownAction=[!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!CommandMeasure mIndex#CURRENTSECTION#Name "#MiddleClickBehavior#"][!HideGroup Toolbars][!SetVariable ActiveToolbar 0 "Droptop\DropdownBar"][!SetVariable UnfocusAction 0 "Droptop\DropdownBar"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Toolbars "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MouseOverAction=[!SetVariable CurrentFolder #CURRENTSECTION#][!UpdateMeasure MeasureSliders#AnimationOFF#][!CommandMeasure MeasureSliders#AnimationOFF# "Execute 1"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor2*#"][!SetOption #CURRENTSECTION# FontColor "#*SuperColor2*#"][!ShowMeterGroup Highlight][!SetOptionGroup Highlight Y [#CURRENTSECTION#:Y]][!SetOptionGroup Highlight W [#CURRENTSECTION#:W]][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter FolderBlock][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!EnableMouseActionGroup "MouseOverAction" Items][!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*SuperColor*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*SuperColor*#,#DropdownItemOpacity#"][!SetOption #CURRENTSECTION# FontColor "#*SuperColor*#,#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!HideMeterGroup Highlight][!Redraw]
MouseScrollUpAction=[!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!SetVariable ScrollTracker (#ScrollTracker#-(#ScrollTracker#-#MaxItem#<=#MaxItem#?(#ScrollTracker#-#MaxItem#):#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!CommandMeasure mPath "PageUp"][!DeactivateConfigGroup Toolbar0][!HideMeter HighlightSelected][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseScrollDownAction=[!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!SetVariable ScrollTracker (#ScrollTracker#+(#ScrollTracker#+#MaxItem#>=[AnalyzeTotal]?([AnalyzeTotal]-#ScrollTracker#):#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!CommandMeasure mPath "PageDown"][!DeactivateConfigGroup Toolbar0][!HideMeter HighlightSelected][!UpdateMeasure *][!UpdateMeter *][!Redraw][!UpdateMeasure ScrollCheck]
W=(#DropdownMenuWidth#-#ArrowHighlightW#-(#HideIcons#=1?#NoIconPadding#:#DropdownPadding#))
H=#DropdownMenuHeight#
Padding=[#Padding[#RTLText]B]
DynamicVariables=1
ClipString=1
Text="%1"
Hidden=1
X=(1+(#DropdownMenuWidth#*#RTLText#))
Y=R

@Include=#@#Meters\ArrowStyle\ArrowStyle#ArrowStyle#.ini

[IconStyle]
MeasureName=mIndex#CURRENTSECTION#
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#HighlightXOffset#-(#DropdownIconPadding#*2))*#RTLText#))
Y=#DropdownIconSpacing#R
W=#IconW#
H=#IconH#
Greyscale=#Greyscale#
ImageAlpha=#IconAlpha#
ImageTint=#IconTint#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
UpdateDivider=-1
Hidden=1

[BackgroundStyle]
LeftMouseDownAction=[]

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownCutout#,(#DropdownMenuShapeOffsetH#+#DropdownCutout#),(#DropdownMenuWidth#+2-(#DropdownCutout#*2)),(#DropdownMenuHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(#DropdownMenuLandingHeight#-(#DropdownMenuLandingHeight#*#HideLanding#))),#BGCorner# | Fill Color #ToolbarBG1#,(#ToolbarOpacity1#<1?1:#ToolbarOpacity1#) | StrokeWidth #StrokeWidth2# | Stroke Color #StrokeColor2#
Shape2=#FlatTopShape#
Shape3=Combine Shape | Union Shape2
DynamicVariables=1

;----------------------------------------------------
; Item Highlight
;----------------------------------------------------

[HighlightContainer]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle (#DropdownCutout#+#HighlightCutout#),(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#),(#DropdownMenuWidth#+2-(#DropdownCutout#*2)-(#HighlightCutout#*2)),(#DropdownMenuHeight#*#NumberOfItems#),#HLContainerCorner# | Fill Color 255,0,0 | StrokeWidth 0
UpdateDivider=-1

[HighlightBackground]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle (#DropdownCutout#+#HighlightXOffset#),0,(#DropdownMenuWidth#-(#DropdownCutout#*2)-(#HighlightXOffset#*2)),#DropdownMenuHeight#,#HLCorner# | Fill Color #ToolbarHL#,#ToolbarHLO# | StrokeWidth 0 | Skew #DropdownHLSkew#,0
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
; Item Names
;----------------------------------------------------

[NA]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Text="#ToolbarsItem0A#"
Y=((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#)
LeftMouseDownAction=["#FolderLoc#"][!HideGroup Toolbars][!SetVariable ActiveToolbar 0 "Droptop\DropdownBar"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Toolbars "Droptop\DropdownBar"]
MouseOverAction=[!SetOption #CURRENTSECTION#Icon ImageTint #*SuperColor2*#][!SetOption #CURRENTSECTION#Icon ImageAlpha (255-(255*#HideIcons#))][!SetOption #CURRENTSECTION# FontColor "#*SuperColor2*#"][!ShowMeterGroup Highlight][!SetOptionGroup Highlight Y [#CURRENTSECTION#:Y]][!SetOptionGroup Highlight W [#CURRENTSECTION#:W]][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint #*SuperColor*#][!SetOption #CURRENTSECTION#Icon ImageAlpha (#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))][!SetOption #CURRENTSECTION# FontColor "#*SuperColor*#,#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=1
Group=0 | Items | ItemName

[1]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Y=((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#)
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[2]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[3]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[4]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[5]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[6]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[7]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[8]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[9]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[10]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[11]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[12]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[13]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[14]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=14 | 15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[15]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=15 | 16 | 17 | 18 | 19 | 20 | Items | ItemName

[16]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=16 | 17 | 18 | 19 | 20 | Items | ItemName

[17]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=17 | 18 | 19 | 20 | Items | ItemName

[18]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=18 | 19 | 20 | Items | ItemName

[19]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=19 | 20 | Items | ItemName

[20]
Meter=String
MeterStyle=InfoStyle | ItemStyle
Group=20 | Items | ItemName

;----------------------------------------------------
; Icons
;----------------------------------------------------

[NAIcon]
Meter=Image
MeterStyle=IconStyle
ImageName=#@#FixedIcons\#IconSize#\noitem.png
ImageTint=#SuperColor#
ImageAlpha=(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DynamicVariables=1
UpdateDivider=1
Group=0 | ItemIcon

[1Icon]
Meter=Image
MeterStyle=IconStyle
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#)
Group=1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[2Icon]
Meter=Image
MeterStyle=IconStyle
Group=2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[3Icon]
Meter=Image
MeterStyle=IconStyle
Group=3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[4Icon]
Meter=Image
MeterStyle=IconStyle
Group=4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[5Icon]
Meter=Image
MeterStyle=IconStyle
Group=5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[6Icon]
Meter=Image
MeterStyle=IconStyle
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[7Icon]
Meter=Image
MeterStyle=IconStyle
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[8Icon]
Meter=Image
MeterStyle=IconStyle
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[9Icon]
Meter=Image
MeterStyle=IconStyle
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[10Icon]
Meter=Image
MeterStyle=IconStyle
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[11Icon]
Meter=Image
MeterStyle=IconStyle
Group=11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[12Icon]
Meter=Image
MeterStyle=IconStyle
Group=12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[13Icon]
Meter=Image
MeterStyle=IconStyle
Group=13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[14Icon]
Meter=Image
MeterStyle=IconStyle
Group=14 | 15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[15Icon]
Meter=Image
MeterStyle=IconStyle
Group=15 | 16 | 17 | 18 | 19 | 20 | ItemIcon

[16Icon]
Meter=Image
MeterStyle=IconStyle
Group=16 | 17 | 18 | 19 | 20 | ItemIcon

[17Icon]
Meter=Image
MeterStyle=IconStyle
Group=17 | 18 | 19 | 20 | ItemIcon

[18Icon]
Meter=Image
MeterStyle=IconStyle
Group=18 | 19 | 20 | ItemIcon

[19Icon]
Meter=Image
MeterStyle=IconStyle
Group=19 | 20 | ItemIcon

[20Icon]
Meter=Image
MeterStyle=IconStyle
Group=20 | ItemIcon

;----------------------------------------------------
; Folders
;----------------------------------------------------

[FolderBlock]
Meter=Image
SolidColor=0,0,0,0
X=1
Y=[1:Y]
W=#DropdownMenuWidth#
H=(#DropdownMenuHeight#*[CalcFolderNum])
LeftMouseDownAction=[!CommandMeasure MeasureSliders#AnimationOFF# "Stop 1"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY ([#CurrentFolder#:Y])][!WriteKeyValue Variables CurrentToolbar #CurrentToolbar# "#SKINSPATH#Droptop\Other\Toolbar01\Toolbar01.ini"][!WriteKeyValue Variables CurrentToolbar #CurrentToolbar# "#SKINSPATH#Droptop\Other\Toolbar02\Toolbar02.ini"][!WriteKeyValue Variables ToolbarNum #ToolbarNum# "#SKINSPATH#Droptop\Other\Toolbar01\Toolbar01.ini"][!WriteKeyValue Variables SelectedFolderY [#CurrentFolder#:Y] "#SKINSPATH#Droptop\Other\Toolbar01\Toolbar01.ini"][!WriteKeyValue Variables Toolbar01Loc "[mPath][mIndex#CurrentFolder#Name]" "#SKINSPATH#Droptop\Other\Toolbar01\Toolbar01.ini"][!HideGroup Toolbar0][!DeactivateConfigGroup Toolbar0][!ActivateConfig "Droptop\Other\Toolbar01"][!Move (#CURRENTCONFIGX#+#DropdownMenuWidth#+#SubMenuXOffset#) (#CURRENTCONFIGY#+[#CurrentFolder#:Y]-[1:Y]) "Droptop\Other\Toolbar01"][!#Show# "Droptop\Other\Toolbar01"][!Update "Droptop\Other\Toolbar01"][!UpdateMeter HighlightSelected][!Redraw]
MouseOverAction=[!SetVariable FolderMode 1]
MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1

;----------------------------------------------------
; Arrows
;----------------------------------------------------

[1Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F1 | F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20
Y=[1Icon:Y]

[2Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F2 | F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[3Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F3 | F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[4Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F4 | F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[5Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F5 | F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[6Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F6 | F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[7Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F7 | F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[8Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F8 | F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[9Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F9 | F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[10Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F10 | F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[11Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F11 | F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[12Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F12 | F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[13Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F13 | F14 | F15 | F16 | F17 | F18 | F19 | F20

[14Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F14 | F15 | F16 | F17 | F18 | F19 | F20

[15Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F15 | F16 | F17 | F18 | F19 | F20

[16Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F16 | F17 | F18 | F19 | F20

[17Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F17 | F18 | F19 | F20

[18Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F18 | F19 | F20

[19Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F19 | F20

[20Arrow]
Meter=Shape
MeterStyle=ArrowStyle
Group=F20

;----------------------------------------------------
; Scrollbar
;----------------------------------------------------

[ScrollbarTop]
Meter=Image
X=3
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#-1)
UpdateDivider=-1

[Size]
Measure=Calc
Formula=((#DropdownMenuHeight#*#MaxItem#)-#DropdownIconYoffset#)
UpdateDivider=-1
Group=Scrollbar

[ScrollH]
Measure=Calc
Formula=Size * (#MaxItem# / (AnalyzeTotal = 0 ? 1 : AnalyzeTotal))
UpdateDivider=-1
RegExpSubstitute=1
Substitute="^0$":"#DropdownMenuHeight#"
Group=Scrollbar
Disabled=1

[ScrollbarScript]
Measure=Script
ScriptFile=#LuaLoc#
UpdateDivider=-1

[CurrentPos]
Meter=Shape
Shape=Rectangle 0,0,(3*#DroptopSize#),([ScrollH]<1?1:[ScrollH]),2 | Fill Color #SuperColor#,155 | StrokeWidth 0 | StrokeColor #ToolbarBG1#,55
X=(#DropdownMenuWidth#-(3*#DroptopSize#)-(#StrokeWidth2#/2))
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#+1)
DynamicVariables=1
Group=ScrollBar | Items
Hidden=1

;----------------------------------------------------
; Landing
;----------------------------------------------------

[OpenFolder]
Meter=Image
ImageName=#@#FixedIcons\#TopIconSize#\dot.png
ImageTint=#SuperColor#,#DropdownItemOpacity#
ImageAlpha=55
X=(8*#DroptopSize#)
Y=(#DropdownIconYoffset#+(#DropdownMenuHeight#*#NumberOfItems#)-((#DropdownIconYoffset#+(#DropdownMenuHeight#/2))%1)+#DropdownItemYOffset#+#ActionButtonOffset#)
H=(16*#DroptopSize#)
LeftMouseDownAction=["#FolderLoc#"][!SetVariable ActiveToolbar 0 "Droptop\DropdownBar"][!HideGroup Toolbars][!UpdateMeterGroup Toolbars "Droptop\DropdownBar"][!HideMeter HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Toolbars "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#FixedIcons\#TopIconSize#\open.png"][!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#FixedIcons\#TopIconSize#\dot.png"][!SetOption #CURRENTSECTION# ImageAlpha 55][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=#HideLanding#
DynamicVariables=1

[OpenSettings]
Meter=Image
ImageName=#@#FixedIcons\#TopIconSize#\dot.png
ImageTint=#SuperColor#,#DropdownItemOpacity#
ImageAlpha=55
X=(30*#DroptopSize#)
Y=r
H=(16*#DroptopSize#)
LeftMouseDownAction=[!SetVariable ActiveToolbar 0 "Droptop\DropdownBar"][!HideGroup Toolbars][!ActivateConfig "Droptop\Other\Settings\Panels" "Toolbars.ini"][!DeactivateConfig "Droptop\Other\Settings\Windows"][!HideMeter HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup Toolbars "Droptop\DropdownBar"][!SetVariable SelectedToolbar #CurrentToolbar# "Droptop\Other\Settings\Panels"][!Update "Droptop\Other\Settings\Panels"][!Redraw "Droptop\DropdownBar"][!Delay 150][!CommandMeasure MeasureSliders2 "Execute 5" "Droptop\Other\Settings"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#FixedIcons\#TopIconSize#\gear.png"][!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#FixedIcons\#TopIconSize#\dot.png"][!SetOption #CURRENTSECTION# ImageAlpha 55][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=#HideLanding#
DynamicVariables=1

[OpenRefresh]
Meter=Image
ImageName=#@#FixedIcons\#TopIconSize#\dot.png
ImageTint=#SuperColor#,#DropdownItemOpacity#
ImageAlpha=55
X=(52*#DroptopSize#)
Y=r
H=(16*#DroptopSize#)
LeftMouseDownAction=[!DeactivateConfig][!WriteKeyValue Variables CycleToolbar #CurrentToolbar# "#SKINSPATH#Droptop\Other\BackgroundProcesses\Tasks\ToggleToolbars.ini"][!ActivateConfig "Droptop\Other\BackgroundProcesses\Tasks" "ToggleToolbars.ini"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#FixedIcons\#TopIconSize#\refresh.png"][!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#FixedIcons\#TopIconSize#\dot.png"][!SetOption #CURRENTSECTION# ImageAlpha 55][!UpdateMeter #CURRENTSECTION#][!Redraw]
Hidden=#HideLanding#
DynamicVariables=1

[DownArrow]
Meter=Shape
Shape=Rectangle (-2*#DroptopSize#),(1*#DroptopSize#),(15*#DroptopSize#),(15*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,0,(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
Shape3=Rectangle 0,(-2*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
Shape4=Combine Shape2 | Exclude Shape3
Look=Fill Color #SuperColor#,(#ScrollTracker#>=[AnalyzeTotal]?0:(#DropdownItemOpacity#/4))
LeftMouseDownAction=[!SetVariable ScrollTracker (#ScrollTracker#+(#ScrollTracker#+#MaxItem#>=[AnalyzeTotal]?([AnalyzeTotal]-#ScrollTracker#):#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!CommandMeasure mPath "PageDown"][!DeactivateConfigGroup Toolbar0][!HideMeter HighlightSelected][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*SuperColor*#,(#*ScrollTracker*#>=[AnalyzeTotal]?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*SuperColor*#,(#*ScrollTracker*#>=[AnalyzeTotal]?0:(#DropdownItemOpacity#/4))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#DropdownMenuWidth#-(25*#DroptopSize#))
Y=r
Hidden=#HideLanding#
DynamicVariables=1

[UpArrow]
Meter=Shape
Shape=Rectangle (-2*#DroptopSize#),(1*#DroptopSize#),(15*#DroptopSize#),(15*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,(7*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
Shape3=Rectangle 0,(9*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
Shape4=Combine Shape2 | Exclude Shape3
Look=Fill Color #SuperColor#,(#ScrollTracker#<=#MaxItem#?0:(#DropdownItemOpacity#/4))
LeftMouseDownAction=[!SetVariable ScrollTracker (#ScrollTracker#-(#ScrollTracker#-#MaxItem#<=#MaxItem#?(#ScrollTracker#-#MaxItem#):#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!CommandMeasure mPath "PageUp"][!DeactivateConfigGroup Toolbar0][!HideMeter HighlightSelected][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*SuperColor*#,(#*ScrollTracker*#<=#MaxItem#?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*SuperColor*#,(#*ScrollTracker*#<=#MaxItem#?0:(#DropdownItemOpacity#/4))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#DropdownMenuWidth#-(45*#DroptopSize#))
Y=r
Hidden=#HideLanding#
DynamicVariables=1
