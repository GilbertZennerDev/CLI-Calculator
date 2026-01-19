import sys

def doCalc(nb1: float, op, nb2: float):
	try:
		nb1 = float(nb1)
		nb2 = float(nb2)
	except Exception as e: print(e); exit()
	match op:
		case '+':
			print(nb1 + nb2)
		case '-':
			print(nb1 - nb2)
		case '*':
			print(nb1 * nb2)
		case '**':
			print(nb1 ** nb2)
		case '/':
			print(nb1 / nb2)
		case _:
			print("Unknown Operators")

def run():
	while 1:
		x = input("Enter command: ")
		if x == "exit": print("Exiting program."); return;
		else: x = x.split(' ')
		if len(x) == 3: doCalc(x[0], x[1], x[2])
	
if __name__ == "__main__":
	av = sys.argv
	ac = len(av)
	run()
