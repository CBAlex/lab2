lab2: BMI.o lab2.o
	g++ -o lab2 lab2.o BMI.o

BMI.o: BMI.cpp BMI.h
	g++ -c BMI.cpp

lab2.o: lab2.cpp BMI.h
	g++ -c lab2.cpp

clean:
	rm lab2 *.o

