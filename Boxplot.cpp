#Give the chart file a name
png(file = "boxplot.png")
#plot the chart
boxplot(mpg~cyl,data = mtears,xlab = "Number of cylinders",ylab = "miles per gallon",main = "Mileage data")
#save the file
dev.off()

