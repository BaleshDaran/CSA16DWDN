#Create data for the graph
v<-c(9,13,21,8,36,22,12,41,31,33,19)
#Give the chart file a name 
png(file = "Histogram.png")
#Create the Histogram
hist(v,xlab = "weight",col = "yellow",border="blue")
#Save the file
dev.off()
