d= {1:2,5:10,2:3,0:3}
a=sorted(d.items(), key =lambda item: item[1] )
print(d)
print(a[0])
print(a)


my_dict = {'apple': 5, 'orange': 8, 'banana': 2, 'grape': 3}

# Sort the dictionary by value in descending order
sorted_dict_desc = dict(sorted(my_dict.items(), key=lambda item: item[1], reverse=True))

print(sorted_dict_desc)