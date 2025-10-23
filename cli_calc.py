hist = []
usrinput = ""
while 1:
	usrinput = input("Enter command: ")
	if usrinput == "exit":
		break
	elif usrinput == "hist":
		print(hist)
		continue
	hist.append(usrinput)
	usrinput = usrinput.split()
	#if usrinput[0] == "redo" and len(usrinput) == 2:
	#	try:
			
	result = "Invalid Input"
	if usrinput[1] == '+':
		result = float(usrinput[0]) + float(usrinput[2])
	elif usrinput[1] == '-':
		result = float(usrinput[0]) + float(usrinput[2])
	elif usrinput[1] == '*':
		result = float(usrinput[0]) * float(usrinput[2])
	elif usrinput[1] == '**':
		result = float(usrinput[0]) ** float(usrinput[2])
	elif usrinput[1] == '/' and float(usrinput[2]) != 0:
		result = float(usrinput[0]) / float(usrinput[2])
	print(result)