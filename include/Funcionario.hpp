
class Funcionario
{
private:
	int 		m_id;
	std::string m_nome;
	std::string m_CPF;
	short 		m_idade;
	short 		m_tipo_sangue;		// A / B / AB / O
	short 		m_fator_RH;			// + / -
	std::string m_especialidade;

public:

	int get_id ( void );
	std::string get_nome ( void );
	std::string get_CPF ( void );
	short get_idade ( void );
	short get_t_sangue ( void );
	short get_RH ( void );
	std::string get_espec ( void );
/*
	int set_id (  );
	std::string set_nome (  );
	std::string set_CPF (  );
	short set_idade (  );
	short set_t_sangue (  );
	short set_RH (  );
	std::string set_espec (  );
*/
	Funcionario( int _id, std::string _nome, std::string _CPF,
				 short _idade, short _tipo_sangue, short _fator_RH, std::string _especialidade )
		:
		,
		,
		,
		,
		,
	{ /* Vazio */ }
	virtual ~Funcionario();
	
};

class Veterinario : public Funcionario
{
public:
	Veterinario();
	~Veterinario();
	
};

class Tratador : public Funcionario
{
public:
	Tratador();
	~Tratador();
	
};


