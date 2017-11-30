#ifndef SILVESTRE_HPP
#define SILVESTRE_HPP

class AnimalSilvestre
{
private:
	std::string ibama;

public:

	std::string get_ibama( void );

	AnimalSilvestre();
	~AnimalSilvestre();
	
};

class Nativo : public AnimalSilvestre
{
private:
	std::string uf_origem;
	std::string autorizacao;

public:

	std::string get_uf_origem( void );
	std::string get_autorizacao( void );

	void set_autorizacao( std::string new_autorizacao );

	Nativo();
	~Nativo();
	
};

class Exotico : public AnimalSilvestre
{
private:
	std::string pais_origem;

public:

	std::string get_pais_origem( void );

	Exotico();
	~Exotico();
	
};

#endif