#Load the party package.It will automatically load other
#dependent packages
library(party)
#Create the input data frame
input.dat<-readingSkills[c(1:105),]
#Give the chart file a name
png(file="decision_tree.png")
#Create the tree
output.tree<-ctree(
  nativeSpeaker~age+shoesize+score,datainput data)
#plot the tree
plot(output.tree)
#save the file
dev.off()
