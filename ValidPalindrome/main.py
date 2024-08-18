
def isPalindrome(s):
	if len(s) == 1:
		return True
	r = ""
	for char in s:
		if char == " ":
			continue
		else:
			if char.isalpha():
				r += char.lower()
			elif char.isdigit():
				r += char
				r.lower()
	rev = r[::-1]
	return rev == r



if __name__ == '__main__':
	s = "gag ::a"
	res = isPalindrome(s)
	print(res)
