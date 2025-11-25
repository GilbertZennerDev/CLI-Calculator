import sys

def doCalc(nb1, op, nb2):
	try:
		nb1 = float(nb1)
		nb2 = float(nb2)
	except Exception as e: print(e); exit()
	if op == '+': return(nb1 + nb2)
	if op == '-': return(nb1 - nb2)
	if op == '*': return(nb1 * nb2)
	if op == '**': return(nb1 ** nb2)
	if op == '/': return(nb1 / nb2)
	return "FALSE OPERATOR"

def run_args():
	print(doCalc(sys.argv[1], sys.argv[2], sys.argv[3]))

def run():
	hist = [['2', '*', '5']]
	usrinput = [""]
	while usrinput[0] != "exit":
		usrinput = input("Enter command: ").split()
		if usrinput[0] == "exit": break
		elif usrinput[0] == "hist": print(hist);continue
		if usrinput[0] == "redo":
			try: usrinput = hist[int(usrinput[1])]
			except Exception as e: print(e); exit()
		if len(usrinput) == 3:
			if usrinput not in hist: hist.append(usrinput)
			try: print(doCalc(usrinput[0], usrinput[1], usrinput[2]))
			except Exception as e: print(e); exit()
	
if __name__ == "__main__":
	ac = len(sys.argv)
	if ac < 2: exit()
	if ac >= 2:
		if sys.argv[1] == "loop": run(); exit()
		if ac == 4: run_args()
