# Python3 code to demonstrate
# prefix sum list
# using For loop + list indexing

# initializing list
test_list = [3, 4, 1, 7, 9, 1]

# printing original list
print("The original list : " + str(test_list))

# using For loop and list indexing
# prefix sum list
res = [0]*len(test_list)
res[0] = test_list[0]
for i in range(1, len(test_list)):
	res[i] = res[i-1] + test_list[i]

# print result
print(res)
