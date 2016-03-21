finish:main.o BMI.o
	g++ -o finish main.o BMI.o
main.o:main.cpp BMI.h
	g++ -c main.cpp
BMI.o:BMI.cpp BMI.h
	g++ -c BMI.cpp
clean:
	rm main.o BMI.o
 
