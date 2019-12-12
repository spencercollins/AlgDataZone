
def getPath(graph, s, e,p=[]):
    
    p.append(s)

    if s == e:
        print("real")
        print (p)
    
    for n in graph[s]:
        if n not in p and e not in p:
            getPath(graph, n , e, p)
    p.pop()
    

graphDL = {'x': ['y','z'] , 'y' : ['z','a','x'], 'z': ['a','y','c'], 'a': ['z','y'], 'b': ['c'], 'c': ['z','b']}

getPath(graphDL, "x", "a")
