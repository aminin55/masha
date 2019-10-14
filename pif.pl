def pif(depth):
	if depth == 1:
		return ["1"]

	else:
		row=pif(depth-1)
		tmp=["1"]
		for i in range(0,depth-2):
			tmp.append ( str( int(row[i])+int(row[i+1]) ) )
		tmp.append("1")
		return tmp

print( pif(7))