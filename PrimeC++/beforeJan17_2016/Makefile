PROG=const_cast testConcept externC reference defaultArg thisP  callPrivate conversion pureVirtual
all : ${PROG}
testConcept : testConcepts.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
externC : externC.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
reference : reference.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
defaultArg : defaultArg.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
thisP : thisP.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
virtualKey : virtualKey.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
callPrivate : callPrivate.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
pureVirtual : pureVirtual.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
conversion : conversion.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^
const_cast : const_cast.cpp
	g++ -std=c++1y -pedantic  -g -o $@ -Wall $^


clean : 
	rm -rf *.o ${PROG} *.dSYM
