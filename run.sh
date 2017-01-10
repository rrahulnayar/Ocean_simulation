./serial_ocean 6 6 1 10 1

./serial_ocean 6 6 1000 10 1


./serial_ocean 9 9 3 0 1
./omp_ocean 9 9 3 0 1


omp_num_threads=1 ./omp_ocean 514 514 100 0 0

omp_num_threads=2 ./omp_ocean 514 514 100 0 0

omp_num_threads=4 ./omp_ocean 514 514 100 0 0

omp_num_threads=8 ./omp_ocean 514 514 100 0 0

omp_num_threads=16 ./omp_ocean 514 514 100 0 0


omp_num_threads=1 ./omp_ocean 1026 1026 100 0 0

omp_num_threads=2 ./omp_ocean 1026 1026 100 0 0

omp_num_threads=4 ./omp_ocean 1026 1026 100 0 0

omp_num_threads=8 ./omp_ocean 1026 1026 100 0 0

omp_num_threads=16 ./omp_ocean 1026 1026 100 0 0


omp_num_threads=1 ./omp_ocean_static 514 514 100 0 0

omp_num_threads=2 ./omp_ocean_static 514 514 100 0 0

omp_num_threads=4 ./omp_ocean_static 514 514 100 0 0

omp_num_threads=8 ./omp_ocean_static 514 514 100 0 0

omp_num_threads=16 ./omp_ocean_static 514 514 100 0 0


omp_num_threads=1 ./omp_ocean_static 1026 1026 100 0 0

omp_num_threads=2 ./omp_ocean_static 1026 1026 100 0 0

omp_num_threads=4 ./omp_ocean_static 1026 1026 100 0 0

omp_num_threads=8 ./omp_ocean_static 1026 1026 100 0 0

omp_num_threads=16 ./omp_ocean_static 1026 1026 100 0 0


omp_num_threads=8 ./omp_ocean_static 2 2 100 0 0

omp_num_threads=8 ./omp_ocean_static 4 4 100 0 0

omp_num_threads=8 ./omp_ocean_static 8 8 100 0 0

omp_num_threads=8 ./omp_ocean_static 16 16 100 0 0

omp_num_threads=8 ./omp_ocean_static 32 32 100 0 0

omp_num_threads=8 ./omp_ocean_static 64 64 100 0 0

omp_num_threads=8 ./omp_ocean_static 128 128 100 0 0

omp_num_threads=8 ./omp_ocean_static 256 256 100 0 0

omp_num_threads=8 ./omp_ocean_static 512 512 100 0 0

omp_num_threads=8 ./omp_ocean_static 1024 1024 100 0 0

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 2

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 4

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 8 

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 16

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 32

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 64

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 128

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 256

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 512

omp_num_threads=8 ./omp_ocean_static_increment 514 514 100 0 0 1024


