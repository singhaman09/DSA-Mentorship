import pandas as pd
data= pd.read_csv("C:\\Users\\HP\\Downloads\\iris.csv")

#Displaying the number of rows randomly.
print(data.sample(5))


#Calculating sum, mean and mode of a particular column.
sum_data = data["sepal_length"].sum()
mean_data = data["sepal_length"].mean()
median_data = data["sepal_length"].median()
print("Sum:",sum_data, "\nMean:", mean_data, "\nMedian:",median_data)


# Extracting minimum and maximum from a column.
min_data=data["sepal_length"].min()
max_data=data["sepal_length"].max()
print("Minimum:",min_data, "\nMaximum:", max_data)