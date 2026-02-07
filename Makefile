CXX = g++

CXXFLAGS = -Wall -std=c++11

TARGET = horse_race

SOURCES = main.cpp Horse.cpp Race.cpp

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) $(SOURCES) -o $(TARGET)

clean:
	rm -f $(TARGET)
