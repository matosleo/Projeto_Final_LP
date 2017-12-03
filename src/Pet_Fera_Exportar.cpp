/**
 * @file Pet_Fera_Exportar.cpp
 * @brief      Implementação de um programa auxiliar para o Pet_Fera que
 *             perminte filtrar e exportar os dados dos animais
 * @details    
 *
 * @author     Gleydvan Macedo
 * @author     João Vítor Venceslau Coelho
 * @since      03/12/2017
 * @date       03/12/2017
 */

/*
	Receber via terminal todas as informações do que será realizado
	Se for uma classe podemos filtrar diretamente esse campo no arquivo dos animais
	Se for um veterinario ou tratador temos que pesquisar qual o codigo referente a ele no
		arquivo dos funcionarios e depois filtrar o arquivo dos animais com o codigo obtido
	No momento de filtrar, tomar o cuidado de pesquisar o codigo do veterinario ou tratador
		no campo correto, para não obter um resultado errado.
*/

bool termina_com(const std::string &str, const std::string &suffix)
{
    return str.size() >= suffix.size() and str.compare(str.size() - suffix.size(), suffix.size(), suffix) == 0;
}

// Não vai dar certo... consertar...
std::fstream filtrar( std::fstream &alvo , std::string filtro ) // acho que o retorno é melhor bool...
{
	std::string linha;
	std::fstream filtrado;
	while( std::getline( alvo, linha ) )
	{
		// como saber se achei realmente oque queria?
		// uma ideia seria pular exatamente o numero de separadores
		// necessarios para chegar no campo a ser filtrado
		std::size_t encontrado = linha.find(filtro); // alterar...
		if ( encontrado != std::string::npos )
		{
			filtrado << linha;
		}
	}
	return filtrado; 	// caso eu use bool isso claramente não vai dar certo...
						// como retornar já filtrado? altero o original?
}

int main(int argc, char const *argv[])
{
	bool c_flag = false, v_flag = false, t_flag = false;
	char c;
	std::string classe, veterinario, tratador, arquivo_saida;
	opterr = 0;
	while ((c = getopt (argc, argv, "c:v:t:")) != -1)		// parece meio estranho esse getopt...
	{
	 	switch(c)
	 	{
			case 'c':
				c_flag = true;
				classe = optarg;
				break;
			case 'v':
				v_flag = true;
				veterinario = optarg;
				break;
			case 't':
				v_flag = true;
				tratador = optarg;
				break;
			case '?':
				if (optopt == 'c' or optopt == 'v' or optopt == 't')
				{
					std::cerr << "Erro: '-" << char(optopt) << "' necessita de um argumento.\n";
					return 1;
				} else if (isprint(optopt))
				{
					std::cerr << "Erro: '-" << char(optopt) << "' inválido.\n";
					return 1;
				} else {
					std::cerr << "Erro: '\\x" << optopt << "' caractere inválido\n" ;
					return 1;
				}	
			default:
				std::cerr << "Erro desconhecido. Programa abortado.\n" ;
				return 1;
		}
	}

	if (optind < argc)
	{
		arquivo_saida = argv[optind];
	}

	if ( argc < 2 or (not termina_com(arquivo_saida,".csv") ) )
	{
		std::cout << "\t--Modo de usar--" << std::endl
				  << "Opcional:		'-c' <Classe> - Indica a classe de animais a serem exportados." << std::endl
				  << "				Opções de Classe: Amphibia, Reptilia, Aves e Mammalia." << std::endl
				  << "Opcional:		'-v' <Veterinario> - indica que apenas animais sob a responsabilidade do veterinário informado devem ser exportados." << std::endl
				  << "              Indicar qual o nome do Veterinario" << std::endl // Seria melhor poder usar o código dele...
				  << "Opcional:		'-t' <Tratador> - indica que apenas animais tratados pelo tratador informado devem ser exportados" << std::endl
				  << "              Indicar qual o nome do Tratador" << std::endl // Seria melhor poder usar o código dele...
				  << "Obrigatório:	<Arquivo de Saida> - indica o nome do arquivo de saída, ou seja, do arquivo onde serão guardados os dados a serem exportados" << std::endl
				  << "              Deve incluir a extensão .csv" << std::endl; // Facilita a diferenciar dos outros campos caso alguma entrada muito estranha seja colocada...
		return 1;
	}

	std::fstream dados_animais;
	dados_animais.open ("data/dados_animais.csv");

	if(dados_animais.bad())
	{
		std::cerr << "O arquivo com informações dos animais não pode ser aberto" << std::endl;
		std::cerr << "Abortando execução do programa" << std::endl;
		return 1;
	}

	std::fstream dados_funcionarios;
	dados_funcionarios.open ("data/dados_funcionarios.csv");

	if(dados_funcionarios.bad())
	{
		std::cerr << "O arquivo com informações dos funcionarios não pode ser aberto" << std::endl;
		std::cerr << "Abortando execução do programa" << std::endl;
		return 1;
	}

	std::fstream filtrado;
	filtrado.open (arquivo_saida);

	if(filtrado.bad())
	{
		std::cerr << "O arquivo de saida informado não pode ser aberto" << std::endl;
		std::cerr << "Abortando execução do programa" << std::endl;
		return 1;
	}

	if ( c_flag )
	{
		filtrado = filtrar(filtrado, classe);	// unico que talvez funcione
	}

	if ( v_flag )
	{
		// tenho que passar o codigo do veterinario, não o veterinario
		filtrado = filtrar(filtrado, veterinario);	
	}

	if ( t_flag )
	{
		// tenho que passar o codigo do tratador, não o tratador
		filtrado = filtrar(filtrado, tratador);
	}
}