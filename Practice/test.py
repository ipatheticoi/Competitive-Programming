print(list(*[iter('abcdefghi')]))
print(list(zip(*[iter('abcdefghi')]*3)))
for part in zip(*[iter('abcdefghi')]*3):
	print(part)