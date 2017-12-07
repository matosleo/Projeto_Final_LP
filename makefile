# Makefile baseado no exemplo dado pelo Professor Silvio Costa Sampaio

# $@ nome do alvo (target)
# $^ lista com os nomes de todos os pre-requisitos sem duplicatas
# $< nome do primeiro pre-requisito

# Variaveis para os subdiretorios
LIB_DIR=lib
INC_DIR=include
SRC_DIR=src
OBJ_DIR=build
BIN_DIR=bin
DOC_DIR=doc

RM = rm -rf
CC = g++
CFLAGS = -Wall -pedantic -ansi -std=c++11 -I$(INC_DIR)
AR = ar
LIBFLAGS = -lPetFera

.PHONY: all clean distclean doxy

linux: dir $(BIN_DIR)/teste $(BIN_DIR)/exportar 

debug: CFLAGS += -g -O0 -pg

# LINUX

#$(BIN_DIR)/cadastrar: $(LIB_DIR)/libPetFera.so $(INC_DIR)/cadastro.hpp $(SRC_DIR)/cadastro.cpp $(SRC_DIR)/cadastrar.cpp
#	$(CC) $(CFLAGS) $(SRC_DIR)/cadastrar.cpp $(INC_DIR)/cadastro.hpp $(SRC_DIR)/cadastro.cpp -L$(LIB_DIR) $(LIBFLAGS) -o $@
#	@echo "+++ [Binario criado em $@] +++"
$(BIN_DIR)/teste: $(LIB_DIR)/libPetFera.so $(INC_DIR)/Pet_Fera_Cadastro.hpp $(SRC_DIR)/Pet_Fera_Cadastro.cpp $(SRC_DIR)/main_teste.cpp
	$(CC) $(CFLAGS) $(SRC_DIR)/main_teste.cpp $(SRC_DIR)/Pet_Fera_Cadastro.cpp -L$(LIB_DIR) $(LIBFLAGS) -o $@
	@echo "+++ [Binario criado em $@] +++"

$(BIN_DIR)/exportar: $(SRC_DIR)/Pet_Fera_Exportar.cpp $(INC_DIR)/Pet_Fera_Exportar.hpp
	$(CC) $(CFLAGS) $(SRC_DIR)/Pet_Fera_Exportar.cpp -o $@
	@echo "+++ [Binario criado em $@] +++"

#$(LIB_DIR)/libPetFera.a: $(INC_DIR)/Animal.hpp $(INC_DIR)/Animal_Classes.hpp $(INC_DIR)/Silvestre.hpp $(INC_DIR)/Funcionario.hpp $(SRC_DIR)/Animal.cpp $(SRC_DIR)/Anfibio.cpp $(SRC_DIR)/Aves.cpp $(SRC_DIR)/Mamifero.cpp $(SRC_DIR)/Reptil.cpp $(SRC_DIR)/Silvestre.cpp $(SRC_DIR)/Funcionario.cpp
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/Animal.cpp -o $(OBJ_DIR)/Animal.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/Anfibio.cpp -o $(OBJ_DIR)/Anfibio.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/Aves.cpp -o $(OBJ_DIR)/Aves.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/Mamifero.cpp -o $(OBJ_DIR)/Mamifero.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/Reptil.cpp -o $(OBJ_DIR)/Reptil.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/Silvestre.cpp -o $(OBJ_DIR)/Silvestre.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/AnfibioExotico.cpp -o $(OBJ_DIR)/AnfibioExotico.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/AnfibioNativo.cpp -o $(OBJ_DIR)/AnfibioNativo.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/MamiferoExotico.cpp -o $(OBJ_DIR)/MamiferoExotico.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/MamiferoNativo.cpp -o $(OBJ_DIR)/MamiferoNativo.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/ReptilExotico.cpp -o $(OBJ_DIR)/ReptilExotico.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/ReptilNativo.cpp -o $(OBJ_DIR)/ReptilNativo.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/AveExotico.cpp -o $(OBJ_DIR)/AveExotico.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/AveNativo.cpp -o $(OBJ_DIR)/AveNativo.o
#	$(CC) $(CFLAGS) -c $(SRC_DIR)/Funcionario.cpp -o $(OBJ_DIR)/Funcionario.o
#	$(AR) -cru $@ $(OBJ_DIR)/Animal.o $(OBJ_DIR)/Anfibio.o $(OBJ_DIR)/Aves.o $(OBJ_DIR)/Mamifero.o $(OBJ_DIR)/Reptil.o $(OBJ_DIR)/Silvestre.o $(OBJ_DIR)/AnfibioExotico.o $(OBJ_DIR)/AnfibioNativo.o $(OBJ_DIR)/MamiferoExotico.o $(OBJ_DIR)/MamiferoNativo.o $(OBJ_DIR)/ReptilExotico.o $(OBJ_DIR)/ReptilNativo.o $(OBJ_DIR)/AveExotico.o $(OBJ_DIR)/AveNativo.o $(OBJ_DIR)/Funcionario.o
#	@echo "+++ [Biblioteca estatica criada em $@] +++"

$(LIB_DIR)/libPetFera.so: $(INC_DIR)/Animal.hpp $(INC_DIR)/Animal_Classes.hpp $(INC_DIR)/Silvestre.hpp $(INC_DIR)/Funcionario.hpp $(SRC_DIR)/Animal.cpp $(SRC_DIR)/Anfibio.cpp $(SRC_DIR)/Aves.cpp $(SRC_DIR)/Mamifero.cpp $(SRC_DIR)/Reptil.cpp $(SRC_DIR)/Silvestre.cpp $(SRC_DIR)/Funcionario.cpp
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/Animal.cpp -o $(OBJ_DIR)/Animal.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/Anfibio.cpp -o $(OBJ_DIR)/Anfibio.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/Aves.cpp -o $(OBJ_DIR)/Aves.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/Mamifero.cpp -o $(OBJ_DIR)/Mamifero.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/Reptil.cpp -o $(OBJ_DIR)/Reptil.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/Silvestre.cpp -o $(OBJ_DIR)/Silvestre.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/AnfibioExotico.cpp -o $(OBJ_DIR)/AnfibioExotico.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/AnfibioNativo.cpp -o $(OBJ_DIR)/AnfibioNativo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/MamiferoExotico.cpp -o $(OBJ_DIR)/MamiferoExotico.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/MamiferoNativo.cpp -o $(OBJ_DIR)/MamiferoNativo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/ReptilExotico.cpp -o $(OBJ_DIR)/ReptilExotico.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/ReptilNativo.cpp -o $(OBJ_DIR)/ReptilNativo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/AveExotico.cpp -o $(OBJ_DIR)/AveExotico.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/AveNativo.cpp -o $(OBJ_DIR)/AveNativo.o
	$(CC) $(CFLAGS) -fPIC -c $(SRC_DIR)/Funcionario.cpp -o $(OBJ_DIR)/Funcionario.o
	$(CC) -shared -fPIC -o $@ $(OBJ_DIR)/Animal.o $(OBJ_DIR)/Anfibio.o $(OBJ_DIR)/Aves.o $(OBJ_DIR)/Mamifero.o $(OBJ_DIR)/Reptil.o $(OBJ_DIR)/Silvestre.o $(OBJ_DIR)/AnfibioExotico.o $(OBJ_DIR)/AnfibioNativo.o $(OBJ_DIR)/MamiferoExotico.o $(OBJ_DIR)/MamiferoNativo.o $(OBJ_DIR)/ReptilExotico.o $(OBJ_DIR)/ReptilNativo.o $(OBJ_DIR)/AveExotico.o $(OBJ_DIR)/AveNativo.o $(OBJ_DIR)/Funcionario.o
	@echo "+++ [Biblioteca dinamica criada em $@] +++"

doxy:
	$(RM) $(DOC_DIR)/*
	doxygen Doxyfile

dir:
	mkdir -p bin build doc src include lib 
	
# Copiando o .so para as três possiveis localizações padrões para shared libraries
install: $(LIB_DIR)/libPetFera.so
	sudo mkdir -p /usr/local/lib

	sudo cp $(LIB_DIR)/libPetFera.so /lib/
	sudo cp $(LIB_DIR)/libPetFera.so /usr/lib/
	sudo cp $(LIB_DIR)/libPetFera.so /usr/local/lib/

# Removendo o .so das três possiveis localizações padrões para shared libraries
uninstall: $(LIB_DIR)/libPetFera.so
	
	sudo rm -f /lib/libPetFera.so
	sudo rm -f /usr/lib/libPetFera.so
	sudo rm -f /usr/local/lib/libPetFera.so

valgrind_estatico:
	valgrind -v --leak-check=full --show-reachable=yes ./bin/geometrica_estatico

valgrind_dinamico:
	valgrind -v --leak-check=full --show-reachable=yes ./bin/geometrica_dinamico

clean: dir
	$(RM) $(BIN_DIR)/*
	$(RM) $(OBJ_DIR)/*
	$(RM) $(DOC_DIR)/*
	$(RM) $(LIB_DIR)/*

# FIM do Makefile
