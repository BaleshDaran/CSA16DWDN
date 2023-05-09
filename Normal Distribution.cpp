x.values = seq(-4,4, length = 1000)
y.values = dnorm(x.values)
plot(x.values, y.values, type="l", lty=1, xlab="Z value", ylab="Probability", main="Normal Distribution")
