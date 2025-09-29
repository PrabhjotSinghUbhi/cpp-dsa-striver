def to_lower_no_whitespace(s):
	return ''.join(s.lower().split())

if __name__ == "__main__":
	s = input("Enter a string: ")
	print(to_lower_no_whitespace(s))