[variables]
flip = 0

[backgroundblur]
measure = plugin
plugin = frostedGlass
blurEnabled = #blur#
updateDivider = -1

[mover]
measure = calc
ifCondition = #automove# = 1
ifTrueAction = [!move "(#flip# = 1 ? (#SCREENAREAWIDTH# - #CURRENTCONFIGWIDTH# - #paddingOuter#) : #paddingOuter#)" "#paddingOuter#"]
updateDivider = 30
dynamicVariables = 1

; styles

[contentStyle]
fontFace = #font#
fontSize = (16 * #scale#)
fontColor = #color#
solidColor = #background#
padding = #paddingInner#, #paddingInner#, #paddingInner#, #paddingInner#
antiAlias = 1

[contentStyle2]
x = [content:w]
fontFace = #font#
fontSize = (16 * #scale#)
fontColor = #color2#
solidColor = #background2#
padding = #paddingInner#, #paddingInner#, #paddingInner#, #paddingInner#
dynamicVariables = 1
antiAlias = 1

[icontentStyle]
fontFace = #font#
fontSize = (16 * #scale#)
fontColor = #color2#
solidColor = #background2#
padding = #paddingInner#, #paddingInner#, #paddingInner#, #paddingInner#
antiAlias = 1

[icontentStyle2]
x = [content:w]
fontFace = #font#
fontSize = (16 * #scale#)
fontColor = #color#
solidColor = #background#
padding = #paddingInner#, #paddingInner#, #paddingInner#, #paddingInner#
dynamicVariables = 1
antiAlias = 1
