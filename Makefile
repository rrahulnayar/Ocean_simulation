
CXX= gcc
CXXFLAGS= -O3 -std=c99
LDFLAGS =  

all: serial_ocean omp_ocean omp_ocean_static omp_ocean_static_increment

serial_ocean: serial_ocean.c ocean_main.c printocean.c
	$(CXX) $(CXXFLAGS) ocean_main.c serial_ocean.c printocean.c -o serial_ocean $(LDFLAGS)

omp_ocean: omp_ocean.c ocean_main.c printocean.c
	$(CXX) $(CXXFLAGS) -fopenmp ocean_main.c omp_ocean.c printocean.c -o omp_ocean $(LDFLAGS)

omp_ocean_static: omp_ocean_static.c ocean_main.c printocean.c
	$(CXX) $(CXXFLAGS) -fopenmp ocean_main.c omp_ocean_static.c printocean.c -o omp_ocean_static $(LDFLAGS)

omp_ocean_static_increment: omp_ocean_static_increment.c ocean_main_chunk.c printocean.c
	$(CXX) $(CXXFLAGS) -fopenmp ocean_main_chunk.c omp_ocean_static_increment.c printocean.c -o omp_ocean_static_increment $(LDFLAGS)

clean:
	rm -f serial_ocean
	rm -f omp_ocean
	rm -f omp_ocean_static
	rm -f omp_ocean_static_increment
