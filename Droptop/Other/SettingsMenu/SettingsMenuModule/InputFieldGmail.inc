[Rainmeter]
Group=DroptopSuite | SettingsMenuInput

[Variables]
DropdownPadding=#NoIconPadding#

[CheckUsernameChange]
Measure=String
String=#GmailUsername#
RegExpSubstitute=1
Substitute="(?i)@gmail.com":"","(?i)@google.com":"","(?i)@googlemail.com":""
OnChangeAction=#OptionChanged#[!WriteKeyValue Variables GmailUsername [#CURRENTSECTION#] "#@#GlobalVar\UserSettings.inc"][!SetOption 1 Text #GmailUsername#][!UpdateMeter 1][!Redraw]
DynamicVariables=1

[CheckPasswordChanged]
Measure=String
String=#GmailPassword#
OnChangeAction=#OptionChanged#[!WriteKeyValue Variables GmailPassword #GmailPassword# "#@#GlobalVar\UserSettings.inc"]
DynamicVariables=1
Group=Password

[PasswordStars]
Measure=String
String=#GmailPassword#
RegExpSubstitute=1
Substitute=".":"*"
OnChangeAction=[!SetOption 2 Text "[#CURRENTSECTION#]"][!UpdateMeter 2][!Redraw]
DynamicVariables=1
Group=Password

[1]
SolidColor=#SuperColor#,128
FontColor=#ToolbarBG1#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #SuperColor#,165][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #SuperColor#,128][!UpdateMeter #CURRENTSECTION#][!Redraw]

[2]
Text=[PasswordStars]
SolidColor=#SuperColor#,128
FontColor=#ToolbarBG1#
MouseOverAction=[!SetOption #CURRENTSECTION# SolidColor #SuperColor#,165][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# SolidColor #SuperColor#,128][!UpdateMeter #CURRENTSECTION#][!Redraw]
Y=1R

[3]
FontColor=#SuperColor#,128
MouseOverAction=[]
MouseLeaveAction=[]
Hidden=0

[4]
Hidden=0

[1InputField]
Measure=Plugin
Plugin=InputText.dll
FontColor=#ToolbarBG1#
FontFace=[#FontName[#ThemeNum][#AltFont[#LanguageNum]]]
FontSize=#DropdownMenuFontSize#
AntiAlias=1
SolidColor=#SuperColor#
W=[1:W]
H=#DropdownMenuHeight#
X=[1:X]
Y=[1:Y]
FocusDismiss=1
Command1=[!SetVariable GmailUsername "$UserInput$"][!CommandMeasure 2InputField "ExecuteBatch 1"][!UpdateMeasure CheckUsernameChange]
DefaultValue=""
DynamicVariables=1

[2InputField]
Measure=Plugin
Plugin=InputText.dll
FontColor=#ToolbarBG1#
FontFace=[#FontName[#ThemeNum][#AltFont[#LanguageNum]]]
FontSize=#DropdownMenuFontSize#
AntiAlias=1
SolidColor=#SuperColor#
W=[2:W]
H=#DropdownMenuHeight#
X=[2:X]
Y=[2:Y]
FocusDismiss=1
Command1=[!SetVariable GmailPassword "$UserInput$"][!UpdateMeasureGroup Password]
DefaultValue="[PasswordStars]"
DynamicVariables=1

