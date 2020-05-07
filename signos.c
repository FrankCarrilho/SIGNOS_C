
/* NOME: Sistema Esotérico
   DESENVOLVIDO POR: Daniela Duarte Carneiro Manoel
   PROFESSOR: Manfrine Silva Santos
   1º Módulo - Técnico em Informática
   FUCAPI - AM
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <windows.h>


void carregar()
{
     system("color fd");
     int i;
     for(i=1;i<2;i++){
                      system("cls");
     Sleep(1000);
     printf("\n\n\n\n\n\n\n\n\n\n                                      * ");Sleep(1000);
     printf("* ");Sleep(1000);
     printf("*");
     }
}

void pensamentoDoDia()
{
     srand(time(NULL));
     int r;
     r=rand()%10;
     switch(r)
     {
               case 1:
                    MessageBox(0,"'O tempo abre suas portas a quem sabe esperar.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 2:
                    MessageBox(0,"'O peixe vê a isca, e não vê o anzol.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 3:
                    MessageBox(0,"'Todos acabamos por crescer e por perder aquela tao sagaz visão do mundo...\nEsquecemos o brilho do orvalho, \na sombra das árvores,\na fuga da aranha, \na luz dos charcos. \nPassamos o viver absorvidos pela preocupação. E vemos os dias correr, nublados, uns iguais aos outros.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 4:
                    MessageBox(0,"''Procure ser simples. Viver-se com simplicidade é mais do que um ato de virtude. É também um ato de inteligência.","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 5:
                    MessageBox(0,"'A paz resulta, não da ausência de conflitos na nossa vida mas da nossa capacidade de contorná-los.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 6:
                    MessageBox(0,"'Não se preocupe com os defeitos dos outros mas com os seus.\nProgrida.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 7:
                    MessageBox(0,"'Quando o jogo de xadrez termina, o rei e o peão são colocados na mesma caixa.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 8:
                    MessageBox(0,"'Isto acima de tudo: Sê verdadeiro contigo próprio.(William Shakespeare)'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 9:
                    MessageBox(0,"'Quando deixamos de aprender, envelhecemos. O segredo da juventude eterna é a aprendizagem.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 10:
                    MessageBox(0,"'Não julguemos os outros antes de nos termos colocado no seu lugar.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
       }//fim switch
}// fim pensamentododia

void aries()
{
     int opcao;
         denovo1:
    system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|                   ___/__  ______   ___ ______  _______                      |\n");
    printf ("|                   XXXXXX  XXXXXX   XXX XXXXXX  XXXXXXX                      |\n");
    printf ("|                   XXXXXX  XX|  XX  XXX XX|__   XXXXXXX                      |\n");
    printf ("|                   XX__XX  XX|_XX   XXX XXXXX   XX|       (21/03 a 20/04)    |\n");
    printf ("|                   XXXXXX  XXXXX    XXX XX|     XXXXXXX                      |\n");
	printf ("|                   XX  XX  XX|  XX  XXX XX|___  ___|XXX                      |\n");
	printf ("|                   XX  XX  XX|   XX XXX XXXXXX  XXXXXXX                      |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE ARIES                              |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");system("color 0c");
	printf ("|                                                                             |\n");
	printf ("|                           4 -  PRESENTES PARA ARIES                         |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 - O LADO NEGRO DE ARIES                         |\n");
	printf ("|                                                                             |\n");
	printf ("|                           7 -  ARIES: AMOR E SEXO        0 - MENU PRINCIPAL |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0,"\n\tPela manhã, energia e foco pra cuidar do planejamento da semana e agendar todos os compromissos importantes. Depois, a vibração da Lua em Peixes acentua sua necessidade de recolhimento, romantismo e paixão. Conexão poderosa no amor.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:             
                      MessageBox(0, "\n\tÁries simboliza os inícios. É o primeiro signo que inaugura a ronda do Sol através do zodíaco fixo celeste. Símbolo do Cordeiro de Deus, do Menino-Deus do cristianismo, representa o frescor, a integridade e a espontaneidade.\n Áries quer fertilizar e manifestar sua força de maneira visível. Aprendendo a ajustar-se às pressões e à presença do mundo, pode chegar a realizar muito do que deseja, principalmente se cultivar a persistência e\n um certo espírito distanciado, pelo menos de vez em quando.\n Áries lidera as pessoas naturalmente, mas não porque deseje ser líder, mas sim porque quer o poder para \nfazer as coisas sem que ninguém faça cobranças. O que significa que Áries aguenta bem a solidão da impopularidade e não precisa de tanto reforço social ou aprovação quanto outros signos. Assim, torna-se o protótipo do herói de qualquer época, que segue sua trilha solitária e pioneira mesmo sob a descrença ou a vaia dos outros.\nA qualidade do Fogo, que anima o Áries, fala muito alto. Não há muita preocupação em saber se a ação é razoável, prudente, prática ou até mesmo eficaz. O urgente é agir. Áries gasta mais energia do que recebe. Lida muito mal com hipocrisias e mentiras e prefere as explosões de raiva de curta duração \nao ódio temperado em banho maria anos a fio.\n","PERFIL DE ÁRIES",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                       MessageBox(0, "\n\t\t> QUALIDADE: Quente e Seco(Fogo) - alta energia e capacidade de separar e cortar\n\n\t\t> NATUREZA: ativo, masculino, diurno, impar.\n\n\t\t> POLARIDADE: positiva\n\n\t\t> REGENTE: Marte\n\n\t\t> CORES: branca e vermelha\n\n\t\t> CORPO: cérebro e funcoes vitais\n\n\t\t> PALAVRAS - CHAVE: Verdade, Impulso Vital, Acao, Energia, Iniciativa, Personalidade Imposicao, Luta.\n\n\t\t> SIGNOS COMPATIVEIS: Gemeos, Leao, Sagitario, Aquario\n\n\t\t> VERBO : Querer","FICHA TÉCNICA DE ÁRIES",MB_OK);                 
                       goto denovo1;
                       break;
                 case 4:
                      MessageBox(0, "\n\tÁries é um signo de ação, movimento, pioneirismo e desafios, portanto tem relação com esportes que tenham este perfil, tais como paraquedismo, boxe, enduros, corridas. O espírito de luta cai bem com um cotidiano variado, em que tenha de abrir portas e caminhos novos em empreeendimentos. Quanto à alimentação, são aconselhadas simplicidade e frugalidade, bem como doses adequadas de proteínas para manter o tônus e o ânimo. Áries não gosta muito de altas elaborações culinárias, e prefere ver com clareza os alimentos que come. Passional e sensual, prefere sempre o caminho mais reto, direto e curto para conquistar os seus objetos de desejo. Roupas de corte e tonalidade simples, que não tolham os movimentos e sejam fáceis de manter, são mais aconselhadas. Odores secos e leves são os indicados na hora de escolher perfumes. Música, pintura e escultura expressivas costumam ser mais atraentes para alguém de Áries do que uma apresentação de balé romântico, por exemplo, ou um concerto de música de câmara. O senso estratégico de Áries é naturalmente aguçado e a mente está sempre alerta - o que facilita um bom desempenho em funções arriscadas e arrojadas, mas que não exijam alto grau de esforço continuado. Assim, o poker cai melhor do que o xadrez, e a sinuca, melhor do que um quebra-cabeças. A literatura de viagem e as biografias de homens que fazem a própria lei encantam Áries. Por ser um signo de impulso e impaciência, Áries aceita bem o papel de herói solitário em muitos campos da vida. Mas, apesar de ser um iniciador, não tem tempo para consolidar as conquistas que faz.\n","DICAS ESPECIAIS PARA PRESENTEAR ÁRIES",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                      MessageBox(0, "\n\tProfissões que exijam liderança, pioneirismo, estratégia, intuição. São empreendedores, impacientes e gostam de desafios. Devem ter liberdade de ação e rotinas maleáveis. Empresários na área de metalurgia, construção, engenharia, cirurgiões, vendas - marketing agressivo, aviação, navegação, podem fazer carreira na área militar ou cientifica. Se destacam nos esportes competitivos também.\n","PROFISSÕES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                      MessageBox(0, "\n\tVocê é metido a honesto, sincero e se acha um líder natural. O problema é que você faz tudo ao contrário e não consegue influenciar ninguém. Você gosta de chegar a um determinado lugar e 'botar pra quebrar'. Isso faz de você um ignorante completo. Na verdade, você arruma confusão em todo lugar que passa, simplesmente porque você quer fazer as coisas do seu jeito, nem que seja na base da porrada. O que você quer mesmo é poder. Você quer chegar ao poder nem que tenha que f... todos em sua volta. A sorte dos outros signos do zodíaco é que você nunca consegue chegar ao poder. Falta inteligência.\n","O LADO NEGRO DE ARIES",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - Com Áries é preciso se preparar um pouco para 'ser caçado'. O signo do carneiro adora o desafio e desfruta com a sedução. Áries é atraído pela paixão, a inteligência e a intensidade.\n2 - A vida sexual com eles pode ser realmente assombrosa. É preciso ter a mente aberta, já que os arianos são uma espécie de exploradores sexuais. Querem provar tudo o que existe sob o sol. O sexo para eles é uma aventura.\n3 - Com Áries é preciso ser enérgico. Variedade, espontaneidade e entusiasmo são claves para manter um amante de Áries satisfeito. É preciso lembrar que os pertencentes a este signo se aborrecem facilmente. E o sexo é o 'entretenimento' de Áries. Assim que, se prepare para que isso seja um bom show!\n4 - Tranqüilize-o. Ainda que aparentem ser muito seguros de si mesmos, têm um grande medo de serem rejeitados. Os amantes arianos precisam saber que você está totalmente com eles.\n5 - A relação sexual com um ariano requer confiança. Áries não é apto para os sentimentalismos. Podem ser calculistas e insensíveis, por tanto você deverá ter confiança em si mesmo para que a coisa funcione. É frequente ter discussões com eles, ainda que isso sim, terá a vantagem de um amante que se passa por artista quando se trata de sexo.\n","ARIES: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                         MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR);goto denovo1;
                 
    }    //fim switch
}    // FIM ARIES

void touro()
{
     int opcao;
         denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|                 ______  _______  __  __  ______   _______                   |\n");
    printf ("|                 XXXXXX  XXXXXXX  XX  XX  XXXXXX   XXXXXXX                   |\n");
    printf ("|                 XXXXXX  XX|  XX  XX  XX  XX|  XX  XX|  XX                   |\n");
    printf ("|                   XX    XX|  XX  XX  XX  XX|_XX   XX|  XX   (21/04 a 20/05) |\n");
    printf ("|                   XX    XX|  XX  XX  XX  XXXXX_   XX|  XX                   |\n");
	printf ("|                   XX    XX|__XX  XX__XX  XX| XX_  XX|__XX                   |\n");
	printf ("|                   XX    XXXXXXX  XXXXXX  XX|  XX  XXXXXXX                   |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE TOURO                              |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 03");
	printf ("|                           4 -  PRESENTES PARA TOURO                         |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  LADO NEGRO DE TOURO                          |\n");
	printf ("|                                                                             |\n");
	printf ("|  0 - MENU PRINCIPAL       7 -  TOURO: AMOR E SEXO                           |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0,"\n\tVênus e Saturno continuam fazendo a blindagem no seu setor financeiro, o que é ótimo pra você finalmente negociar com vistas a realizar algo digno de nota neste campo. As coisas finalmente andam no plano material. Curiosidade mental em alta.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\tTouro representa o trabalho, o esforço de materialização do impulso vital iniciado por Áries. Segundo signo zodiacal, marca o período de consolidação da estação, como todos os outros signos fixos que se seguem. Simbolizado pelo Touro, animal de trabalho, paciente que ara os campos e ajuda a fertilizar a terra, representa também os cinco sentidos que podem extrair valor e beleza da vida. Apegado aos hábitos, um pouco tímido, de boa paz e uma enorme capacidade de realização, é o signo de filósofos, que constróem solidamente sistemas de pensamento. Também é o signo dos artistas que tecem com as mãos a forma ideal que seu espírito concebe, sempre com a sabedoria construtora de respeito à vida. Touro é o signo de quem faz da vida uma obra de verdadeira arte, mesmo sem ser artista por profissão. Touro ensina as pessoas a se adaptarem às circunstâncias reais, trabalhando com afinco para alterarem o que lhes desagrada. Signo de sensação, de total engajamento ou descompromisso afetivo com o mundo, é difícil encontrar alguém que tenha nascido com este signo solar e que se omita da vida e de seus problemas. A qualidade da Terra, que anima o Touro, induz a rendição total à realidade. Nada que não implique em escolhas e valores, dos quais Touro tem um sentido muito preciso e agudo. Ponderados, amáveis, sensíveis, de boa fé, os filhos do Touro se encolerizam com poucas coisas nesta vida. Algumas delas: a infidelidade, o descompromisso, a preguiça. Sensuais, são presas fáceis das belas aparências, antes dos trinta anos. Depois, somente se deixam enlevar por quem ou o quê possui a beleza e a harmonia internas, reais. Acostumado às pressoes, persistente, determinado, vai o Touro seguindo seu caminho em seu passo lento, arando a terra e alimentando os outros seres vivos.\n","PERFIL DE TOURO",MB_OK);                      
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Frio e Seco(Terra)- baixa energia e capacidade de separar e cortar.\n\n\t\t> NATUREZA: passivo, feminino, noturno, par.\n\n\t\t> POLARIDADE: negativa\n\n\t\t> REGENTE: Venus \n\n\t\t> CORES: verde e azul\n\n\t\t> CORPO: garganta, ovarios, seios, voz\n\n\t\t> PALAVRAS - CHAVE: Estabilidade, Fertilidade, Amor, Sentimento, Arte, Possessividade, Cooperacao, Valores, Escolhas\n\n\t\t> SIGNOS COMPATIVEIS: Cancer, Virgem, Capricornio e Peixes\n\n\t\t> VERBO : Ter ","FICHA TÉCNICA DE TOURO",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tTouro é um signo sensual, criativo, pacífico, que teima em fazer as coisas de seu jeito. Caminhadas em meio a belas paisagens toca o coração dos filhos do Touro. Nada de esportes extenuantes e violentos - a não ser o desempenho sexual, um esporte em que o Touro costuma se distinguir com louvor... Sensível a todos os prazeres dos sentidos, os quais tem naturalmente bem desenvolvidos, Touro é um dos signos mais fáceis de presentear. Da culinária aos objetos de arte, passando pelos perfumes e a música, as flores e os tecidos agradáveis ao tato, tudo faz a alegria deste ser que é simples mas que ama ser bem presenteado e gosta de abundância. A riqueza material atrai o Touro porque ela permite a satisfação dos desejos e seu desejo de acumular só obedece a um instinto natural de preservação da vida. Se presentear com roupas, prefira os tons de terra e de tecido sensuais, de talhe simples e sem rebuscamentos. Os perfumes devem ser levemente doces e florais, com cheiro de terra molhada, como a chuva da primavera. De todas as artes, escolha a música - os cantos antigos e simples das populações rurais - a pintura, a escultura e a gastronomia. Touro gosta de filosofar, principalmente depois de alimentar-se bem. Mas seu gosto adere ao otimismo e à conservação, pois não se sente bem destruindo as coisas criadas pelo homem ou pela natureza.","DICAS ESPECIAIS PARA PRESENTEAR TOURO",MB_OK);   printf ("*_____________________________________________________________________________*\n");
                      goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tProfissões que requeiram persistência, determinação, que operacionalizem idéias criadas por outras pessoas, são reflexivos e constantes. Criativos, os taurinos se realizam em todo e qualquer trabalho relacionado às artes. Precisam de rotina,segurança financeira e bom ambiente de trabalho. Artes em geral - canto, dança, musica, cerâmica, cestaria etc - administração financeira, produção e operacionalização, gerencia de produtos, de compras e responsáveis pela produção numa empresa.","PROFISSÕES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                     MessageBox(0, "\n\tVocê é materialista e trabalha como um condenado. As pessoas pensam que você é um pão-duro, cabeça-dura, mão-de-vaca, estão certas. Além disso, você é um teimoso desgraçado que faz só burrada na vida e continua fazendo, fazendo, fazendo...Você deve estar se perguntando... Por que eu trabalho tanto e só me ferro? A resposta é simples: sua cabeça-dura não deixa você enxergar um palmo além do seu nariz. Por isso que você trabalha como um condenado e nunca consegue subir na vida. Só leva fumo! E graças a sua teimosia idiota, continua levando, levando, levando...","LADO NEGRO DE TOURO",MB_OK);
                     goto denovo1;
                     break;
                 case 7:
                      MessageBox(0, "\n1 - Com Touro é preciso ser aberto e honesto em relação ao sexo. Eles procuram a segurança acima de tudo. Uma boa comunicação deixa os amantes pertencentes a este signo com uma boa predisposição mental. Um bom conselho é deixar que seu amante taurino saiba o que você está pensando. \n2 - A estabilidade excita a conduta sexual deste signo. Seu caráter é romântico e orientado à relação, e ele desfruta sentindo-se amado. Detalhes singelos, como mostrar afeto, pegar na mão ou dar beijos apaixonados acendem a chama sexual do taurino. O sexo para Touro é a demonstração da devoção que sentem pela pessoa que amam.\n3 - Dê uma chuva de presentes a um taurino e terá meio caminho andado. O resto virá através da arte que você empregue para cortejó-lo. Touro desfruta com o luxo, mas também com as coisas baratas. Em realidade, este signo vê o prazer como um presente, e o orgasmo será seu principal presente.\n4 - Uma promessa de lealdade eterna é, sem dúvida, o maior afrodisíaco para um amante taurino. Os pertencentes a este signo podem chegar a ser extremamente ciumentos e possessivos. Um conselho: é preciso temer a força do 'touro' quando ele se enfurece (tanto homens como mulheres). ","TOURO: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch  
}   //FIM TOURO

void gemeos()
{
     int opcao;
         denovo1:    
     system("cls");

    printf ("*_____________________________________________________________________________*\n");
    printf ("|       ________  ___^__  __     __  ______  _______  _______                 |\n");
    printf ("|       XXXXXXXX  XXXXXX  XX_   _XX  XXXXXX  XXXXXXX  XXXXXXX                 |\n");
    printf ("|       XXX|      XX|__   XXX_ _XXX  XX|__   XX|  XX  XXXXXXX                 |\n");
    printf ("|       XXX| ___  XXXXX   XXXX_XXXX  XXXXX   XX|  XX  XX|     (21/05 a 20/06) |\n");
    printf ("|       XXX| XXX  XX|     XX XXX XX  XX|     XX|  XX  XXXXXXX                 |\n");
	printf ("|       XXX|___X  XX|___  XX     XX  XX|___  XX|__XX  ___|XXX                 |\n");
	printf ("|       XXXXXXX   XXXXXX  XX     XX  XXXXXX  XXXXXXX  XXXXXXX                 |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE GEMEOS                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 0e");
	printf ("|                           4 -  PRESENTES PARA GEMEOS                        |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE GEMEOS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|   0 - MENU PRINCIPAL      7 -  GEMEOS: AMOR E SEXO                          |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0,"\n\tConcentre todas as decisões mais serias para a próxima 4ª feira. Até lá você estará perceptivo e imaginativo, captando as ondas do que vem vindo por ai. Antenado com os sonhos, descobrirá respostas incríveis para perguntas difíceis de amor.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tO repórter do Zodíaco, Gêmeos\n\tEste é o primeiro signo mutável do zodíaco e representa o momento da divisão e do movimento da estabilidade representada pelo signo anterior, Touro. Gêmeos é um signo masculino e ativo, do elemento Ar, e isso significa que é relacional, voltado para a troca com as pessoas, sempre atuando de maneira a criar situações de movimento, em que possa dar livre curso à curiosidade. É o signo que preside a versatilidade, a inquietude e a juventude, como seu regente planetário, Mercúrio, que tem asas nos pés. A mudança no modo de pensar e a premente vontade de ir de um lugar para o outro tornam este signo o comunicador do Zodíaco, mais interessado em saber de tudo um pouco do que profundamente de uma coisa só. Portanto, não é o signo do especialista nem do sábio, que se tranca em seu laboratório. Ao contrário, Gêmeos rege as comunicações e as estradas, os estudos e a relação com os colegas, o meio ambiente imediato, todos os que trabalham com o comércio e a tradução das linguagens. A inconstância de Gêmeos nasce da sua necessidade permanente de experimentar, comunicar, trocar idéias, disseminar informações. Por isso é que o signo de Gêmeos é considerado o repórter do Zodíaco. No passado, Gêmeos era o signo relacionado com os filósofos, os gramáticos, os literatos, os matemáticos e os astrólogos - toda uma categoria de pessoas que trabalha com linguagens. A sede de conhecimento de Gêmeos é forte e sua tendência é dispersar a atenção em muitas direções, pois é um signo de nervosismo, atividade cerebral pronunciada e indecisão. É este o signo que representa a capacidade de convencer pela palavra, sendo importante nas atividades que requerem esse poder de transformar filosofias em idéias aplicáveis.\n","PERFIL DE GÊMEOS",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e Umido(Ar)- alta energia e capacidade de juntar e conectar.\n\n\t\t> NATUREZA: ativo, masculino, diurno, impar.\n\n\t\t> POLARIDADE: positiva\n\n\t\t> REGENTE: Mercurio\n\n\t\t> CORES: azul e turquesa\n\n\t\t> CORPO: maos, dedos, bracos e antebracos\n\n\t\t> PALAVRAS - CHAVE: Mobilidade, Curiosidade, Versatilidade, Aprender, Destreza manual, inteligencia pratica, linguagens.\n\n\t\t> SIGNOS COMPATIVEIS: Gemeos, Libra e Aquario.\n\n\t\t> VERBO : Pensar e ir","FICHA TÉCNICA DE GÊMEOS",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                         MessageBox(0, "\n\tNão é difícil presentear Gêmeos, o signo mais curioso e instável de todo o Zodíaco. Basta prestar atenção na área de interesse atual que ele exibe para você acertar em cheio! Gêmeos adora ler a respeito de seus interesses, mas confira para ver se ele ainda está pesquisando o mesmo tema do ano passado ou descobriu algo mais interessante. Como este não é um signo enfatuado, nem amante de prazeres sofisticados, algo que tenha um perfil atrativo, que inclua algum uso da sua capacidade de raciocínio e destreza manual fazem a sua alegria. Além dos livros, é claro! Todo Gêmeos guarda algo da criança curiosa que desmonta relógios para saber como funcionam. Você pode escolher objetos para as mãos - de luvas a anéis, de braceletes a canivetes, canetas, lapiseiras, jogos de armar, passatempos... Xadrez, baralho, damas, quebra-cabeças, tudo é bem vindo na vida deste habitante cosmopolita que prefere a cidade ao campo e a banca de jornais da praça ao final de semana em uma casinha remota no alto de uma montanha. A comunicação é uma das suas maiores paixões - e também facilidades. Assim, você também agrada quando presenteia o nativo de Gêmeos de qualquer objeto relacionado a isso. Computadores de mão, que possam ser carregados para qualquer local, até um modem mais veloz para suas viagens internéticas será boa pedida. Quanto às cores, dê preferência aos azuis, verdes e matizes rajados, as estampas miúdas e coloridas, aos temas cotidianos da vida urbana. Entre os perfumes, os de tonalidade fresca, seca e primaveril. Na música, os virtuoses e os solistas, o jazz e a música popular urbana.","DICAS ESPECIAIS PARA PRESENTEAR GEMEOS",MB_OK);    printf ("*_____________________________________________________________________________*\n");
                         goto denovo1;
                         break;
                 case 5:
                     MessageBox(0, "\n\tComunicativos, inventivos e engenhosos, se realizam em profissões em que possam incluir boa dose de inovação, relacionamento com pessoas e estudo, informação e expressão. Área de educação, treino e ensino, comunicações, jornalismo, internet, agencia de viagens, turismo, relações publicas, propaganda, artes manuais em geral, e na área medica como massagistas, dentistas, quiropraticos etc. Precisam de ambiente arejado, estimulo de colegas e rotinas flexíveis. Tendem a ter dois empregos, duas vocações, duas profissões ao longo da vida.","PROFISSÕES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                     MessageBox(0, "\n\tO geminiano é capaz de parar o sexo com você, só para ver o novo clip da Amy Winehouse e depois volta com o mesmo fogo de antes, enquanto você está ainda enxugando as lágrimas. O povo de gêmeos tagarela muito. E não consegue guardar segredos. Se quiser prejudicar alguém, solte um veneno para o geminiano e ele vai espalhá-lo, como se fosse a imprensa marrom. E o signo que melhor representa a TPM. O Geminiano é inteligente porque absorve tudo muito rápido , tipo um Sempre Livre, mas odeia se aprofundar nas coisas…  Tipo modess sim, vibrador não. Dizem que gêmeos e falso. Não é. Apenas muda rápido de ideia. Corretores de imóveis se irritam com este signo. O Homem geminiano tem sempre muito o que fazer, muitos amigos, muitas atividades e pode ate ter duas namoradas, porque esqueceu se de terminar com a outra. Mas não tenha pena, mate-o do mesmo jeito.","LADO NEGRO DE GÊMEOS",MB_OK);
                     goto denovo1;
                     break;
                 case 7:
                      MessageBox(0, "\n1 - As questões do sexo e da mente são muito relacionadas para os geminianos. Comprometer à mente é um tiro certo para conquistá-los. Gêmeos adora a excitação mental já que, caso contrário, se aborrece com facilidade. Para seduzir um amante geminiano é preciso introduzir-lhe em novas formas de pensar e de ser. \n2 - Os amantes dos geminianos têm que ser flexíveis. A personalidade dual de Gêmeos e sua paixão pelas coisas novas significa uma tendência a mudar e, por conseguinte, ele se apaixonará pela capacidade que seu companheiro tenha de seguir-lhe.\n3 - Os amantes dos geminianos também devem ser inventivos. Devem estar ao dia e encontrar novas formas de fazer as coisas usuais. Experimente com técnicas manuais e orais. Esteja aberto a novas posições e variações das clássicas. Seu amante geminiano gostará de provar qualquer coisa nova, pelo menos uma vez.\n4 - Trabalhe com os sentidos. Uma boa aparência e um bom perfume são imprescindíveis para que Gêmeos possa desfrutar de uma experiência sensorial completa. Não deixe nenhuma parte de seu corpo sem tocar. Utilize novos tecidos, tatos suaves nas roupas e na pele. Não se limite à hora de provar com sabores, loções, alimentos e, inclusive, roupa interior comestível para excitar suas papilas gustativas. E não esqueça do atrativo sexual que possuem os sons. Diga a seu amante geminiano o que você gosta.\n5 - A variedade é o sal da vida, e uma das claves mais importantes para comprazer aos amantes geminianos. A rotina é uma forma segura de matar seu impulso sexual. Por último, não faça nada que os deixe incômodos.","GÊMEOS: AMOR E SEXO ",MB_OK);
                      goto denovo1;
                      break;
                 default:
                         MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR);goto denovo1;
                 
    }    //fim switch
} // FIM GEMEOS

void cancer()
{
     int opcao;
         denovo1:
     system("cls");
    
    printf ("*_____________________________________________________________________________*\n");
    printf ("|        _______  ___^__  __     __  _______  ______  ______                  |\n");
    printf ("|        XXXXXXX  XXXXXX  XX_    XX  XXXXXXX  XXXXXX  XXXXXX                  |\n");
    printf ("|        XXX| XX  XXXXXX  XXX_   XX  XXX| XX  XX|__   XX|  XX                 |\n");
    printf ("|        XXX|     XX__XX  XXXX_  XX  XXX|     XXXXX   XX|__X (21/06 a 21/07)  |\n");
    printf ("|        XXX| __  XXXXXX  XX XXX_XX  XXX| __  XX|     XXXXX                   |\n");
	printf ("|        XXX|_XX  XX  XX  XX   XXXX  XXX|_XX  XX|___  XX| XX                  |\n");
	printf ("|        XXXXXXX  XX  XX  XX    XXX  XXXXXXX  XXXXXX  XX|  XX                 |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE CANCER                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 09");
	printf ("|                           4 -  PRESENTES PARA CANCER                        |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO NE CANCER                       |\n");
	printf ("|                                                                             |\n");
	printf ("| 0 - MENU PRINCIPAL        7 -  CANCER: AMOR E SEXO                          |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tUse o poder das cores neste início de semana, que alegrem sua alma e aumentem seu pique. Lua e Júpiter aumentam sua fé e confiança na vida e ainda trazem bons presentes e provas de afeto. Relacionamentos prosperam. Noticias de longe. Viagem a vista!","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\tA raiz e a origem\nCâncer é o quarto signo do Zodíaco, representando a força que cria a vida, a raiz que sustenta todo o nosso desenvolvimento posterior na existência. Por isso, é o signo relacionado com a mãe, a fecundidade e a Terra, que nos dá o sustento e nos acolhe. Tem a natureza conservadora e feminina, pois só assim permite a proteção e o cuidado com o embrião. Câncer é um signo de movimento, chamado cardinal, pois marca a mudança de estação do ano, como os outros três signos cardinais Áries, Libra e Capricórnio. Receptivo e nutridor, Câncer simboliza o ventre e o útero que abriga a semente, criando condições para que ela se fortaleça e mais tarde se transforme em um organismo mais complexo. O mistério de uma semente que permanece quieta e crescendo sob a terra, (mas que guarda uma promessa de futuro para o amanhã) está contido no simbolismo de Câncer, que consegue visualizar o que ainda não aconteceu. Essa visão do invisível, esse poder de imaginar e a retenção da memória caracterizam este signo de sensibilidade, impressionável e instável nas emoções como as fases da Lua, o astro que preside Câncer. Amor às tradições, memória do passado e intuição poderosa, voltada para a sobrevivência, são traços característicos de Câncer, o signo que representa a unidade familiar. O animalzinho relacionado ao signo é o caranguejo, cujo casco duro esconde a natureza sensível sob uma aparência muitas vezes áspera. É um dos signos mudos do Zodíaco, ou seja, sente mas retém o que sabe, só expressando quando tem a certeza de que será bem aceito ou que não corre riscos.\n","PERFIL DE CÂNCER",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Frio e Umido(Agua)- baixa energia e capacidade de juntar e conectar.\n\n\t\t> NATUREZA: passivo, feminino, noturno, par.\n\n\t\t> POLARIDADE: negativa\n\n\t\t> REGENTE: Lua\n\n\t\t> CORES: cinza, perola, branco, tonalidades leitosas\n\n\t\t> CORPO: seios e estomago> PALAVRAS - CHAVE: Ontem e Amanha, Sentimento, Familiaridade, Sobrevivencia, Receptividade, Sonho, Nutricao.\n\n\t\t> SIGNOS COMPATIVEIS: Escorpiao, Touro, Peixes e Aquario\n\n\t\t> VERBO : Sentir ","FICHA TÉCNICA DE CÂNCER",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                     MessageBox(0, "\n\tSe o seu objetivo é fazer feliz alguém que tenha o signo solar em Câncer, você precisará estar atento ao que está fazendo com que ele perca o humor. Regido pela Lua, este é o signo instável, que sem mais nem menos, pelo menos aparentemente, muda de expressão facial, se recolhe lá com seus botões e se torna impenetrável - e muitas vezes intratável. Imerso nas marés emocionais, Câncer pode nem perceber o que está se passando fora de sua intimidade, e começa a evitar programas e a dormir mais e mais. Isso é sinal de uma melancolia que se aproxima quando ele não sabe muito bem o que deseja para ser feliz, ou quando a vida se torna áspera lá fora. Portanto, para presentear alguém de Câncer, você precisa ter acesso a essa área recôndita em que ele se esconde do mundo, tal qual o caranguejo que é o símbolo desse signo. Por meias palavras, voltas e volteios, você consegue chegar lá, mas será preciso ser insistente! Uma vez descoberto o tema que aflige o nativo de Câncer, você tem algumas opções. Qualquer presente que o ajude a tornar sua vida privada mais ensolarada é bem vindo. Até mesmo um animalzinho de estimação, no qual ele possa empregar todos os seus talentos maternais. Mas, se o caso não é para tanto, sonde o grau de conforto que ele tem no seu quarto de dormir. Lençóis e mantas, de origem exótica; objetos de toucador, mesinhas e outros objetos de uso pessoal são boa pedida, e você acertará em cheio se escolher algo belo e antigo, pois Câncer adora antiguidades. Como é um tanto impaciente e não gosta de esperar muito para ver o resultado do que faz, você deve evitar os presentes que exigem construção mental demorada ou várias etapas para serem completados, como modelagem de carros, por exemplo, ou quebra-cabeças de montanhas de peças. O lado feminino de Câncer é muito acentuado e isso é um problema para os homens da nossa cultura, que irão desenvolver esse dote na cozinha, uma das artes em que mais se destacam. Portanto, você também acerta se escolher um presente que estimule a sua imaginação nas artes gastronômicas. Quase todo Câncer gosta de colecionar objetos e se você conhece a posição da Lua natal desse personagem, ficará mais fácil descobrir o que lhe agrada mais. Se ele possui a Lua de nascimento em signos de Terra (Touro, Virgem e Capricórnio) opte por objetos macios, agradáveis ao toque e de longa durabilidade. Se a Lua estiver em signos de Ar (Gêmeos, Libra e Aquário) dê preferência ao que se movimenta e tem sons harmoniosos, como móbiles ou campainhas de Feng Shui; no caso de uma Lua em signo de Água (Câncer, Escorpião e Peixes) escolha CDs de música antiga ou de relaxamento; quando a Lua está em signos de Fogo (Áries, Leão e Sagitário) a pedida são as velas, luminárias e objetos brilhantes de latão, cobre, prata ou ouro. Quanto às cores, prefira tudo o que tem a aparência da madrepérola, onde o branco leitoso se confunde com o furta-cor suave das tonalidades azuis, rosas e verdes. No que se refere aos odores, Câncer tem relação com o que é adocicado e quente.","DICAS ESPECIAIS PARA PRESENTEAR CÂNCER",MB_OK);    printf ("*_____________________________________________________________________________*\n");
                     goto denovo1;
                     break;
                 case 5:
                      MessageBox(0, "\n\tImpressionáveis, sensíveis e imaginativos, os cancerianos se satisfazem com uma profissão que lhes dê oportunidade de sonhar, de criar, e de resgatar conhecimentos, historias e memórias de sua coletividade, destacando-se também em profissões ligadas a preservação da vida privada e psíquica, ao fornecimento de produtos consumidos em casa, ou para ela. Gastronomia, historia, psicologia, ensino de crianças pequenas, cuidado com grávidas, terceira idade, mas também arquitetura, decoração etc. Precisam de ambiente tranqüilo e rotinas fluidas.","PROFISSÕES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                      MessageBox(0, "\n\tVamos chorar? Câncer é chorão. Câncer se magoa com facilidade. Câncer é manipulador. Câncer sempre tem dinheiro escondido. Câncer é um signo da água, regido pela lua e é um signo feminino. Ligado à familia, a valores tradicionais e ao romantismo. Resumindo: Uma caretice só. Câncer fica magoado com qualquer bobagem e fica remoendo esta bobagem e um dia, do nada, no meio de uma feijoada com amigos solta o verbo:\n - Aquele dia voce não me ofereceu pastel. \nVocê é egoista, não pensa nos outros. \nE você fica ali pasmado, tentando entender aquilo. Câncer e o mestre em soltar aquela frase:\n - Depois de tudo o que eu fiz por você… A forca da manipulação.. Câncer adora acumular, guardar, colecionar. Sempre tem um dinheiro guardado, um dinheiro que ninguém sabe que ele tem. E Câncer é pão duro. O lado B do canceriano e quase um 'lado c'. Adoram bordeis, saunas e estes lugares modernos tipo … frequentados por casais. Adoram ficar em casa e se possível, teriam a balada delivery, de tanto que gostam de ficar em casa de moleton, arrastando os chinelos. E também aquela pessoa insuportável que demora meia hora no banho e quando sai…dá lhe vapor.","LADO NEGRO DE CÂNCER",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - Câncer gosta de tomar a iniciativa no romance. Por tanto, há que se deixar cortejar, deixar que este signo despregue toda sua magia interior. É preciso ser paciente. Em assuntos de amor, os cancerianos são bastante metódicos. Um amante canceriano deve sentir-se seguro de sua relação.\n2 - É preciso ser flexível. Os cancerianos tendem a refugiar-se com freqüência em sua carapaça de caranguejo. Há que dar-lhes espaço quando necessário. Normalmente, depois de ter interiorizado seus pensamentos, eles regressam rejuvenescidos e com força.\n3 - Mostrar-lhes afeto costuma dar resultados muito positivos. Os pertencentes deste signo gostam de sentirem-se amados. Isto tem sua tradução prática. Transmitir-lhes de forma táctil o afeto e o amor acenderá sua paixão e os converterá em amantes muito especiais.\n4 - O compromisso é outro dos fatores que ajuda à realização sexual dos cancerianos. Este signo adora o amante afetuoso e fiável. Câncer tem um sentido de proteção por natureza. Desfruta dedicando-se à construção de uma confortável casa e compartilhando-a com um amante fiel.","CÂNCER: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM CANCER

void leao()
{
     int opcao;
         denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|                    ___       _______  ____~____  _________                  |\n");
    printf ("|                    XXX|      XXXXXXX  XXXXXXXXX  XXXXXXXXX                  |\n");
    printf ("|                    XXX|      XX|___   XXXXXXXXX  XXX|  XXX                  |\n");
    printf ("|                    XXX|      XXXXXX   XXX___XXX  XXX|  XXX  (22/07 a 22/08) |\n");
    printf ("|                    XXX|___   XXXXXX   XXXXXXXXX  XXX|  XXX                  |\n");
	printf ("|                    XXXXXXX   XX|____  XXX   XXX  XXX|__XXX                  |\n");
	printf ("|                    XXXXXXX   XXXXXXX  XXX   XXX  XXXXXXXXX                  |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE LEAO                               |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 05");
	printf ("|                           4 -  PRESENTES PARA LEAO                          |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE LEAO                         |\n");
	printf ("|                                                                             |\n");
	printf ("| 0 - MENU PRINCIPAL        7 -  LEAO: AMOR E SEXO                            |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();
	system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tVocê tem percebido o valor do conhecimento bem estruturado, das informações corretas, que em muito ajudam a manter sua reputação acima de oscilações ocasionais. Nesta semana, pesquise a fundo um tema relativo a seu trabalho. Amigos por perto.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\tO fogo da paixão\nO quinto signo do Zodíaco simboliza o poder irradiante do amor que se inflama por algo ou alguém e passa então a ter o poder de purificar e iluminar. Como todo signo fixo, Leão detém o poder da estabilização do que foi engendrado em Câncer, o signo anterior. Semelhante aos outros signos masculinos, Leão tende a agir, mais do que se submeter às condições externas. Leão é regido pelo Sol, símbolo da intuição espiritual e da criação. De elemento Fogo, o signo se caracteriza pela intuição como instrumento dominante para lidar com o mundo. Leão simboliza o fogo dentro do homem que o transforma em guerreiro, mais interessado em lutar por uma causa ou crença do que apenas observar o que acontece. Nesse sentido, Leão é um signo de compromisso, pois o Fogo a tudo penetra e transforma. Leão simboliza o rei - inclusive dos animais, o próprio leão, que é o animal que representa este signo. A vitalidade sempre presente, a vontade do eu sobrepujando a vontade do grupo - daí a imagem do guerreiro, do herói, que se consome em uma causa, dá o exemplo de sua própria vida - pois quer educar os outros, mostrando como é possível persistir em um caminho, subjugando todo o resto em nome de uma inspiração vital. Criativo e ambicioso, o Leão tem a força suficiente para mostrar todo o poder de sua individualidade. Ao mesmo tempo, é gregário e preza demais a família, a qual quer proteger a todo custo. Por ser um centro irradiador de coragem e fé, facilmente se torna o centro das atenções. Possui o magnetismo animal que encanta a todos. O Leão é o signo do coração generoso, que busca agir com honradez mas que pode ser bastante despótico e autoritário quando contrariado. Suas paixões ardentes possuem mais estabilidade do que se imagina, pois Leão preza o romantismo mas também busca a constância sentimental. Signo de artistas que procuram o brilho que sai do centro de seu coração, Leão adora também ajudar as pessoas a descobrirem seu próprio brilho interior, tornando-se por isso, excelentes professores.\n","PERFIL DE LEÃO",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e Seco (Fogo) - alta energia e capacidade de separar e cortar\n\n\t\t> NATUREZA: ativo, masculino, diurno, ímpar\n\n\t\t> POLARIDADE: positiva\n\n\t\t> REGENTE: Sol\n\n\t\t> CORES: amarelo-avermelhado, dourado, amarelo\n\n\t\t> CORPO: visão, olhos e coração\n\n\t\t> PALAVRAS - CHAVE: Generosidade, Forca, Vitalidade, Simpatia, Criatividade, Dominio, Determinacao\n\n\t\t> SIGNOS COMPATIVEIS: Aries, Sagitario, Gemeos e Libra.\n\n\t\t> VERBO : Ser ","FICHA TÉCNICA DE LEÃO",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tPresentear um nativo de Leão exige sensibilidade e delicadeza. Certifique-se de que seu presente irá torná-lo feliz. Algo que Leão detesta é falta de consideração por seus interesses e jeito de ser. Esse é um signo intuitivo, não adianta fingir que quer agrada-lo, por que ele perceberá. Mais vale algo simples, mas dado de coração, do que um objeto que não lhe diga respeito - isso ele tomará por desamor. Leão adora ser aplaudido - mas apenas pelo o que realmente sabe fazer ou se esforçou para fazer bem. Faça uma sondagem a respeito de seus gostos nos esportes, na música e nas artes plásticas. Leão tem uma sensibilidade especial para apreciar os verdadeiros talentos. Seja qual for o presente, terá de ser único, original, de valor. Este é um signo que adora brilho e tudo que é dourado, se sente em casa no meio das pessoas amigas que quer bem. Seu bom gosto pode pecar pelo excesso gastronômico ou no vestuário, por vezes. Mas ele irá se sentir feliz se você providenciar uma festa surpresa, com gente que o admira e gosta. Tudo regado a boa comida e bom vinho - em doses generosas para este signo de coração grande. Leão também gosta de se apresentar muito bem e brilhar no meio de todos. Por isso, vestuário, jóias e perfumes, sapatos e capas, casacos e botas podem fazer sua alegria.Se sua escolha recair sobre vestuário ou objetos de uso pessoal, escolha sempre a melhor grife. De preferência algo bem raro e distinto, ele se sentirá especial como gosta de ser. Como são educadores natos, embora impacientes, sonde seus talentos de ensino - ele poderá adorar ganhar algo relacionado. O importante é você presentear o Leão com algo que expresse sua admiração por este espécime raro que sabe ensinar a todos o amor que consome e transforma tudo que toca.","DICAS ESPECIAIS PARA PRESENTEAR LEÃO",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                    MessageBox(0, "\n\tIntuitivos, criativos e sentimentais, os leoninos se sentem a vontade em um ambiente em que possam liderar, trazendo idéias que executam em equipes, sempre liderando-as. Profissões bem criativas em que possam dar vazão a seus sentimentos, como as ligadas as artes - teatro, por exemplo - são grande fonte de realização pessoal. São bons executivos, em cargos de chefia, administração, em qualquer área que se sintam atraídos.","PROFISSÕES",MB_OK);
                    goto denovo1;
                    break;
                 case 6:
                      MessageBox(0, "\n\tLeão é o lider, o rei , o brilho , mas inseguro, precisa de adornos e mimos, senão, sua auto estima é como a de uma ameba na quaresma. Quer levantar um leonino? Elogie-o, finja que a opiniao dele é a suprema, e que sem ele, sua vida seria uma vida vulgar e miserável, típica de personagem secundário de novela do SBT. Quer derrubá-lo? Ignore-o, ria das suas roupas e modos exagerados, não aceite suas verdades prontas e você verá este felino louco, chorando pelas selvas da vida. É ciumento, dramático e cheio de barracos..  As leoninas são bravas, gastadeiras e querem atenção o tempo todo. Manhosas, adoram criar um criar um conflito só para no final, ganhar no debate.","LADO NEGRO DE LEÃO",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                    MessageBox(0, "\n1 - Com Leão temos que começar proclamando nossa adoração por ele, e desta forma teremos dado um grande passo. Quem sabe um doce susurro ao pé do ouvido seja suficiente para despertar o leão que ele leva dentro de si.\n2 -  Com Leão é preciso trabalhar bem as preliminares. Elas devem ser como um culto ao régio signo do poder, algo de que ele desfrutará cada minuto. Quem sabe a melhor recomendação sobre a relação com um leonino seja: leve o tempo que for preciso para acender o fogo em Leão, e tenha certeza de que eles farão com que o sexo seja inesquecível.\n3 - É importante ter claro que Leão é impulsionado pelo prazer. É como se o sexo lhe proporcionasse a oportunidade de possuir um território desconhecido. Os leoninos não se aborrecem facilmente em suas relações, mas desfrutam mais com a emoção de novas experiências.\n4 - No sexo, Leão gosta de ser servido, e de que seu parceiro corresponda em suas atividades preferidas. Se fizer isto, os leoninos subirão às nuvens com toda certeza.\n5 - Em relação a este tema, Leão exige reciprocidade. Inclusive, se você der mais, receberá mais. Por outro lado, também convém ter cuidado para não ferir o orgulho de Leão neste assunto.","LEÃO: AMOR E SEXO",MB_OK);
                    goto denovo1;
                    break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM LEAO

void virgem()
{
     int opcao;
         denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|       ___     ___ ___ ______   ________  ______  __     __                  |\n");
    printf ("|       XXX     XXX XXX XXXXXX   XXXXXXXX  XXXXXX  XX_   _XX                  |\n");
    printf ("|       XXX     XXX XXX XX|  XX  XXX|      XX|__   XXX_ _XXX                  |\n");
    printf ("|       XXX__ __XXX XXX XX|__X   XXX| ___  XXXXX   XX XXX XX (23/08 a 22/09)  |\n");
    printf ("|         XXX_XXX   XXX XXXXX    XXX| XXX  XX|     XX  X  XX                  |\n");
	printf ("|           XXXX    XXX XX| XX   XXX|___X  XX|___  XX     XX                  |\n");
	printf ("|            XX     XXX XX|  XX  XXXXXXX   XXXXXX  XX     XX                  |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE VIRGEM                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 0c");
	printf ("|                           4 -  PRESENTES PARA VIRGEM                        |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE VIRGEM                       |\n");
	printf ("|                                                                             |\n");
	printf ("| 0 - MENU PRINCIPAL        7 -  VIRGEM: AMOR E SEXO                          |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tMercúrio e Plutão em confronto: cuidado com as palavras! De tarde a Lua alcança o signo oposto ao seu, vibrando por um relacionamento mais intenso e entregue com seu amor. Se você não tiver um, sorria mais e abra-se de verdade.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tA busca da perfeição\n\tO signo de Virgem se relaciona com o aprimoramento pessoal e de tudo o que faz. Aperfeiçoar é o que interessa, e para fazer isso, o meio mais fácil é dissecar tudo, analisando cada parte do todo e criando categorias. Daí a relação de Virgem com as ciências normativas, como a zoologia, a botânica, por exemplo. O trabalho cotidiano também significa Virgem, aquele momento em que se aplica o que se aprendeu e se esforça para fazer ainda melhor. Em Virgem, somos todos aprendizes. Insatisfeito, instável, Virgem procura fazer com perfeição até os menores detalhes do que realiza. É um signo de elemento terra: sensorial, voltado para a sensualidade, mas também bastante mental, em um sentido prático e colado à realidade da vida diária, em que é preciso ter horários para que se possa cumprir com tudo o que foi planejado. O organizador do Zodíaco que cataloga até emoções pode ser o melhor ajudante do idealizador, aquele eu irá arranjar os meios para que um projeto realmente se constitua em algo real. Para isso, Virgem estabelece as relações com o meio em que está. É um signo de cálculo das probabilidades -com o risco o calculismo e do utilitarismo que podem aparecer quando dissonante. O trabalhador aplicado e fiel ao que planejou anteriormente chega a se exceder - o que torna mais vulnerável o seu já sensível sistema digestivo e nervoso. As mãos tamborilam sobre a mesa, em um gesto de insatisfação ou pressa, quando diante dos muito sonhadores. São mãos de quem sabe criar as engenhocas mais incríveis e também de fazer os afagos mais precisos no corpo do ser amado. Esse é o traço do elemento terra que se sobrepõe a todos os outros. Tão ligado pode ser na realidade externa, que se esquece de dar o devido valor aos seus sentimentos e emoções, este mundo impreciso e desorganizado, caótico e perigoso que muitas vezes faz com que o sempre controlado Virgem perca a cabeça e faça grandes loucuras. Nesse momento, sua percepção, normalmente alerta e capaz de apreender os menores sinais, se perde e se volta inteiramente para seu mundo interno, em um esforço desesperado de controlar-se. Virgem dá muito valor à mente e à racionalidade e evita mostrar o que sente pelas pessoas - acha que é melhor continuar se controlando e tentando melhorar os outros, com seus comentários e apartes sensatos e críticos, nem sempre bem recebidos. Engenhoso, disciplinado, parcimonioso, Virgem se adapta ás condições, encontra meios para realizar sua tarefa - nos campos de sua preferência: planejamento, catalogação, medicina, veterinária, por exemplo. A perfeição deve existir também no aspecto físico - Virgem é o signo eu rege a dieta purificadora, a alimentação natural, perseguida com afã intenso e até uma certa intolerância para quem leva a vida em esquemas mais desorganizados.\n","PERFIL DE VIRGEM",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Frio e Seco (Terra) - baixa energia e capacidade para separar e delimitar\n\n\t\t> NATUREZA: passivo, feminino, noturno, par\n\n\t\t> POLARIDADE: negativo\n\n\t\t> REGENTE: Mercurio\n\n\t\t> CORES: laranja, azul raiado com tons alaranjados\n\n\t\t> CORPO: intestino delgado\n\n\t\t> PALAVRAS - CHAVE: Critica, Observacao, Catalogacao, Purificacao, Aprimoramento, Perfeicao, Praticidade, Humildade\n\n\t\t> SIGNOS COMPATIVEIS: Capricornio, Touro, Cancer e Escorpiao.\n\n\t\t> VERBO : Analisar","FICHA TÉCNICA DE VIRGEM",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tO signo mais crítico e exigente do Zodíaco não faz questão de brilho nem inovações, muito menos de demonstrações dramáticas. Virgem deseja algo prático, bem feito, de utilização cotidiana, que se adapte às suas necessidades de aperfeiçoamento pessoal - no campo físico e mental. Um beonito rádio-relógio, nesse sentido, é ideal! Nervoso e instável, amante da economia, você pode fazer a sua alegria se presenteá-lo com produtos para banho, de ótima procedência - um para cada função. Ou também pode acertar bastante se escolher objetos que possa montar; modelos em miniatura, por exemplo. Quanto mais intrincado, melhor. Instruções precisas, utilidade clara fazem sua paixão: conjuntos de instrumentos mecânicos, objetos de mesa para escritório - tudo muito sóbrio e de aparência agradável - também são opções interessantes. Apetrechos para dias chuvosos também podem atraentes. Virgem gosta de se informar sobre o mundo, adora coleções e biografias, livros sobre dietas, medicina alternativa, gastronomia, pães e sucos naturais, técnicas de auto-ajuda que possa praticar para relaxar. Se mais moderno, você pode até arriscar panelas, microondas e massageadores caseiros. Ou até um curso de massagem! Como é signo de elemento Terra, Virgem precisa estar sempre em contato com a natureza para repor suas forças; uma boa opção é uma pequena viagem para perto de um local onde Virgem possa se descontrair, dar risada e fazer suas pequenas loucuras a sós. Quanto às cores, dê preferência aos tons da terra mis suaves, mas também ao alaranjado, com matizes rajados, as estampas listradas de duas cores (sóbrias), os compostos double-face. Entre os perfumes, os de tonalidade fresca, com toques de mato e levemente adocicados. Na música, nada muito complexo nem contemporâneo, a não ser que seja um Virgem aficionado à música experimental.","DICAS ESPECIAIS PARA PRESENTEAR VIRGEM",MB_OK);                     goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tRacionais e meticulosos, se realizam em áreas medicas, cientificas e naquelas ligadas ao relacionamento no trabalho, como recursos humanos, cargos e empregos, produção, pois sabem operacionalizar idéias em conjuntos práticos que facilitam a vida da coletividade. Quando médicos, se destacam pela perícia no diagnostico, são excelentes detetives também na área cientifica e tecnológica, rastreiam as condições e oferecem saídas e soluções exeqüíveis. Se destacam nas profissões que exigem habilidade mental e manual, como fotografia. Rotinas flexíveis, precisam se sentir estimulados intelectualmente","PROFISSÕES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                      MessageBox(0, "\n\tVocê é metido a perfeccionista, observador e detalhista. Gosta de analisar e gerenciar tudo. Essa sua maldita mania faz de você um burocrata insuportável. Você é um bitolado e não tem nenhuma imaginação ou criatividade. Gosta mesmo é de tomar conta da vida dos outros. Critica os outros, 'mete o pau', mas não enxerga o próprio rabo. Quando as pessoas dos outros signos do zodíaco preenchem aquele maldito formulário de 15 vias carbonadas, de cinco cores diferentes, que devem ser batidos à máquina, elas não tem dúvida. Só pode ser um virginiano que fez.","LADO NEGRO DE VIRGEM",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                     MessageBox(0, "\n1 - Para levar-lhes ao sexo, os detalhes contam muito. Os virginianos são românticos por natureza. Com pequenos gestos é possível chegar à sua alma, algo que pode se manifestar através de rosas e da luz de velas. Faça o 'virgem' se sentir especial.  \n2 - Comunique-se. Ainda que o virginiano tenda a manter um verdadeiro nível de reserva, é preciso se esforçar em ter abertas as linhas de comunicação e conseguir um sentimento de amante feliz.\n3 - Virgem está entre os signos que requer um início lento. Os jogos preliminares são essenciais tanto para os homens como para as mulheres pertencentes a este signo. Será a chave que deixará sair seu fogo interior. Fale muito, olhe freqüentemente nos olhos, beije, acaricie...\n4 - Ser espontâneo é outra das coisas que os virginianos apreciam, eles gostam que lhes iluminem em matéria de sexo. Não o tire de sua zona confortável, deixe-lhe sentir-se protegido e calmo no mundo em que se sente a vontade, não lhe provoque sustos ou mal-interpretações desnecessárias. Com Virgem, utilize métodos refinados e educados. ","VIRGEM: AMOR E SEXO",MB_OK);
                     goto denovo1;
                     break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM VIRGEM

void libra()
{
     int opcao;
         denovo1:
     system("cls");
    
    printf ("*_____________________________________________________________________________*\n");
    printf ("|            ____       ___ ________   ________   ________                    |\n");
    printf ("|            XXX|       XXX XXXXXXXX_  XXXXXXXX   XXXXXXXX                    |\n");
    printf ("|            XXX|       XXX XXX|  XXX_ XXX|  XXX  XXX| XXX                    |\n");
    printf ("|            XXX|       XXX XXX|___XXX XXX|__XX   XXX|_XXX   (23/09 a 22/10)  |\n");
    printf ("|            XXX|____   XXX XXX|  XXX_ XXXXXXX    XXXXXXXX                    |\n");
	printf ("|            XXXXXXXX   XXX XXX|___XXX XXX| XXX   XXX  XXX                    |\n");
	printf ("|            XXXXXXXX   XXX XXXXXXXXX  XXX|  XXX  XXX  XXX                    |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE LIBRA                              |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 01");
	printf ("|                           4 -  PRESENTES PARA LIBRA                         |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE LIBRA                        |\n");
	printf ("|                                                                             |\n");
	printf ("| 0 - MENU PRINCIPAL        7 -  LIBRA: AMOR E SEXO                           |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tManhã ótima pra explorar seus dons, estará com mais pique e aberto pra trocar ideias com todos. Desacertos nos planos do cotidiano merecem um pouco de paciência, não vale desistir! A noite, saúde mais sensível - vigie a rotina e os alimentos.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tRelações públicas do Zodíaco\nDiplomata, jovial, simpático, Libra pensa que o mundo deve ser um local harmonioso e agradável. Na astrologia, é o primeiro dos signos acima do horizonte, que inaugura a relação da pessoa com o mundo externo. Ir ao encontro de seus pares, aprender a conviver com quem é diferente, eis o lema da Libra, signo que marca também o início da primavera no hemisfério sul. Libra é um dos quatro signos cardinais que sinalizam início das estações, quando elas mudam, daí seu caráter apressado e ágil, que adora a vida urbana trepidante - pelo menos durante a primeira metade da vida -, com bastante movimento porque foge da mesmice e do tédio, que o entristece. Voltado para a associação e à cooperação, contando com um faro incrível que lhe permite encontrar o mínimo divisor comum entre os pontos de vista mais divergentes, Libra tem também uma grande preocupação com a comunidade, e é capaz de batalhar pela justiça, sendo um ótimo árbitro. Tão preocupado está em acertar uma avaliação correta, um julgamento adequado, que naturalmente acaba hesitando entre muitas opções de vida. Mas é o ritmo, importante para criar harmonia e equilíbrio, que é seu território real. Isso torna Libra um mestre das artes de convivência, mas também um artista, que pode desenvolver em algum momento da vida, seus dotes criativos na música e nas artes plásticas buscando sempre o refinamento estético, a sutileza e a imagem de seu tempo. Algumas vezes, além da hesitação, Libra termina convivendo com pessoas e grupos sociais que nem sempre prova, pois para ele é muito importante conhecer muita gente - adora o glamour da fama - e ser bem relacionado. Libra sabe desde que nasceu que nenhum homem é uma ilha - e leva essa crença até as últimas conseqüências. Quando contrariado ou frustrado, sua tendência é refletir, pensar muito, muitas vezes às custas de suas emoções - que ficam guardadas e podem se transformar em problemas renais ou na coluna vertebral. Libra tem horror de destemperos emocionais, é um signo de racionalidade que não entende muito bem as subjetividades e tende a privilegiar A Relação mais até do que os participantes da mesma. Em nome disso, acaba aceitando o que não tem de aceitar, e depois se arrepende. Principalmente no amor, Libra precisa de compatibilidade mental e semelhança de valores para ser feliz. Ele procura acima de tudo justiça e equilíbrio nas relações. Sensível às aparências, pode se enganar com um belo rosto e boas maneiras, um comportamento cosmopolita e um certo verniz cultural, que acende a sua imaginação para os bons momentos que poderão ser vividos em grupo.\n","PERFIL DE LIBRA",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e Úmido (Ar) - alta energia e capacidade de juntar e conectar\n\n\t\t> NATUREZA: ativo, masculino, diurno, impar\n\n\t\t> POLARIDADE:     positiva\n\n\t\t> REGENTE: Venus\n\n\t\t> CORES: azul -esverdeado, azul-pavao, verde-mar\n\n\t\t> CORPO: rins e a bacia \n\n\t\t> PALAVRAS - CHAVE: Sociabilidade, Justiça, Razao, Arte, Comunicacao, Relacionamento, Refinamento, Equilibrio\n\n\t\t> SIGNOS COMPATIVEIS:   Aquario, Leao, Gemeos e Sagitario.\n\n\t\t> VERBO : Amar ","FICHA TÉCNICA DE LIBRA",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tLibra adora a vida em sociedade e o requinte, as boas maneiras, faz questão de estar presente nos programas culturais e sociais - e tem muito jeito para a produção desses mesmos eventos. Assim, o melhor presente é aquele que ele possa usar no mundo lá fora, ou o que o ajude a se relacionar melhor com todo mundo. Libra também gosta de se informar - a cultura, a política e a arte são temas em que você pode apostar se pretende presentear com livros - bem bonitos, com design refinado e belas ilustrações ou reproduções. As artes em geral também são boas pedidas: esculturas, pinturas, mas que estejam na moda, porque Libra não gosta de nada ultrapassado. Apesar de prezar muito a história, seu coração bate mais forte com tudo o que está no topo da linha. Cuidado aqui: se você acha que ele tem predileção por best-sellers, não é bem isso. Apesar de ser um signo que luta pela igualdade de oportunidades, jamais irá a uma festa sabendo que está usando a mesma roupa que os amigos. Algo precisa ser diferente - mais avançado, mais original, único de algum ponto de vista. Vênus, o planeta do amor, rege este signo - um passeio a dois para curtir a intimidade romântica e a troca de idéias também é uma ótima opção. Nas cores, a suavidade deve imperar, as composições em tons frios, nada que agrida o sentido estético apurado deste signo. Em matéria de perfumes, todos aqueles que têm um toque floral, leve e algumas notas secas.","DICAS ESPECIAIS PARA PRESENTEAR LIBRA",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tO tipo relações publicas do zodíaco se dará bem em qualquer profissão em que tenha de estabelecer acordos entre as partes: direito, política. Atividades que incluam forte dose de sensibilidade artística, como decoração, arquitetura também são indicadas. São artistas por natureza e com isso sabem ser excelentes moderadores, agilizam equipes, mas não gostam de comandar nem executar trabalhos em solidão. Quanto a rotina, que seja variada, em que possam ser razoavelmente independentes e tenham contato com gente.","PROFISSÕES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                      MessageBox(0, "\n\tVocê se acha equilibrado, idealista e justo. Parece sentir a necessidade de proteger os outros e lutar contra as injustiças. Na verdade, você só pensa em si mesmo. Você é um engomadinho metido. Gosta de coisas sofisticadas e de alto nível, mas não passa de um ignorante desinformado. Nas conversas, quer falar sobre coisas intelectuais, como literatura e arte, e dificilmente entra em assuntos polêmicos. Quer ser politicamente correto. Na realidade você é um grande 'fazedor de média'. Isso esconde sua verdadeira cara. Dessa forma, os outros signos nunca saberão seu real interesse, que é f... os outros. Afinal, você é um teimoso, ignorante e ambicioso. Libra também tem uma mania chata de seduzir Deus e o mundo e depois não sabe o que fazer com a vítima , então é muito comum que tenha muitos relacionamentos ao mesmo tempo , até que uma das vítimas perde a paciência e lhe mete a mão na cara(geralmente uma ariana ou leonina ensandecidas). E Fica horas, numa mesma questão:\n 'Mas se formos ao motel,não acordaremos cedo para comer o pastel da feira….'\n 'Mas se acordarmos cedo para comer o pastel , não iremos ao motel, e acho que precisamos transar….'\n 'Mas também se formos a feira, não sei se é legal, porque você está de regime'…\n 'Mas também no motel tem tv, então poderíamos ver o Supercine'….\n Mas também…\n E segue a chatice que dá nos nervos. E quando libra se decide, afe, dálhe romantismo melado. No meio do sexo, o libriano quer parar e olhar nos seus olhos e inventa de acariciar seu corpo com uma rosa ..No meio de um jogo de baralho ele quer que você pare, porque a lua tá linda. No final da novela, ele resolve dizer que te ama. Coragem!!! ","LADO NEGRO DE LIBRA",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - O primeiro passo é cativar a mente de Libra. Libra é um signo de ar, é intelectual e se estimula com a conversa. Estão orientados ao relacionamento por natureza, e são absolutamente românticos. Quanto mais forte seja o tipo de relação, melhor será o sexo.\n2 - No jogo da sedução e do amor os librianos precisam sentir-se desejáveis e desfrutar ao serem cortejados. Portanto, não tenha medo de tomar a iniciativa e ser quem faz o primeiro movimento. Mas antes assegure-se de que sabe o muito que o deseja.\n3 - No jogo do amor há que saber levar-lhes à paixão. Jogue. Olhe o libriano nos olhos e o beije profundamente. Lembre-se, em todo momento, que o corpo humano é maravilhoso e lhe responderá.\n4 - Os librianos adoram as novas experiências quando se trata de sexo. Se encantam por os que podem ser um pouco mais fortes que eles. Tenha em mente que qualquer pessoa que possa ajudar Libra a converter-se num melhor amante terá prioridade em sua lista pessoal.\n5 - Relaxe e desfrute do que um amante libriando possa lhe oferecer. Os pertencentes a este signo têm uma profunda necessidade de comprazer. Isto também acontece em suas vidas sexuais. Os librianos estão muito predispostos a satisfazer seus amantes.","LIBRA: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM LIBRA

void escorpiao()
{
     int opcao;    denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|  ______ ______ _____ ______ ______  ______ ___ __~___ ______                |\n");
    printf ("|  XXXXXX XXXXXX XXXXX XXXXXX XXXXXX  XXXXXX XXX XXXXXX XXXXXX                |\n");
    printf ("|  XX|__  XX|___ XXXXX XX| XX XX|  XX XX| XX XXX XX| XX XX| XX                |\n");
    printf ("|  XXXXX  XXXXXX XX|   XX| XX XX|__X  XX|_XX XXX XX|_XX XX| XX (23/10 a 21/11)|\n");
    printf ("|  XX|       |XX XX|__ XX| XX XXXXX   XXXXXX XXX XXXXXX XX| XX                |\n");
	printf ("|  XX|___ ___|XX XXXXX XX|_XX XX| XX  XX|    XXX XX  XX XX|_XX                |\n");
	printf ("|  XXXXXX XXXXXX XXXXX XXXXXX XX|  XX XX|    XXX XX  XX XXXXXX                |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE ESCORPIAO                          |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 0a");
	printf ("|                           4 -  PRESENTES PARA ESCORPIAO                     |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE ESCORPIAO                    |\n");
	printf ("|                                                                             |\n");
	printf ("| 0 - MENU PRINCIPAL        7 -  ESCORPIAO: AMOR E SEXO                       |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tMarte se despede nesta semana de Touro, mas até que isso aconteça é melhor você ter paciência com seus parceiros, sócios e clientes! De muitos modos estará nas mãos deles. Amor devotado e zelo por familiares, filhos e crianças em destaque.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tA transformação radical\n\tSigno da intensidade, da profundidade e da luta pela sobrevivência, Escorpião é o investigador do zodíaco. Nada lhe passa desapercebido, e onde temos este signo, ali mergulhamos fundo em um processo intenso de mudança e transformação, mesmo que seja ao custo de podar muita coisa - e só ficar com o essencial. Grande administrador nato, dono de um olhar de lince, teimoso e determinado, Escorpião é um guerreiro que procura o jeito mais certeiro de chegar até seus objetivos - e ás vezes se torna cruel e manipulador para alcançá-los. Ninguém jamais é o mesmo depois que cruza o caminho do Escorpião, cuja função no mundo é transformar, nem que seja cutucando... Escorpião busca um propósito além do visível, nem que seja pelo alto preço. Descontente, atormentado, o elemento água aqui se conecta com todas as linguagens invisíveis aos menos atentos: grande ledor de almas, de posturas corporais, Escorpião é o cirurgião que tem o instinto voltado para erradicar o anacrônico, o apodrecido e o inútil. E faz isso em qualquer campo em que esteja: na vida familiar, sentimental, profissional... Não é preciso esconder nada dele, pois a mera intenção de fazer isso já é sentida corporalmente pelo Escorpião. Reagindo com seu instinto a todo tipo de ameaça a seus planos ou objetivos, o Escorpião avança, muitas vezes em silencio, controlando suas expressões e sonhos, para mais tarde descansar. Desconfiado - conhece todos os males que afligem a alma humana - torna-se amargo, um pouco melancólico quando percebe até onde pode ir a fraude, a hipocrisia e a dispersão, que detesta. É um signo magnético, de força animal, ligado em sexo, dinheiro e poder - os três grandes temas que movimentam a humanidade desde sempre. Chega a ser autoritário nesse seu esporte preferido de alcançar o poder, mas jamais mesquinho. No amor, é apaixonado, se entrega de corpo e alma, segue até o inferno com o ser amado, é possessivo, leal e crítico de si mesmo e do outro. A fidelidade é algo que ele conquista aos poucos - e a traição jamais é esquecida. A tradição astrológica sempre diz que o pior inimigo que se pode ter é um Escorpião, pois ele aguarda anos a fio até dar o bote e aniquilar quem traiu a sua confiança. Por estas qualidades - e defeitos - Escorpião é amado ou detestado, temido e tolerado, porque se faz imprescindível, e obriga seus rivais a 'engolirem' sua presença, mesmo quando não desejam, por que sabe administrar crises como ninguém. E acaba por ser respeitado, enfim. Detetive por natureza, soma a isso uma extrema sagacidade, que o faz descobrir talentos ocultos em quase todo mundo, mas que se torna um pouco assustadora e pesada quando está triste, ferido ou desanimado. A procriação e seus filhotes são algo sagrado para signo, que se maravilha com seus filhos a ponto de parecer ingênuo - mas é capaz de destruir qualquer ameaça a eles, nem que seja ele mesmo.\n","PERFIL DE ESCORPIÃO",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Frio e Umido (Ar) - energia baixa e grande capacidade de juntar e conectar\n\n\t\t> NATUREZA: passivo, feminino, noturno, par\n\n\t\t> POLARIDADE: negativo\n\n\t\t\n\n\t\t> REGENTE: Marte, tradicionalmente, Plutao modernamente\n\n\t\t> CORES: vermelho-sangue, vermelho-arroxeado, roxo e negro\n\n\t\t> CORPO: sistema excretor e reprodutivo\n\n\t\t> PALAVRAS - CHAVE: Auto-controle, Determinacao, Paixao, Sexo, Poder, Regeneracao, Transformacao, Posse, Ciúme, Magnetismo\n\n\t\t> SIGNOS COMPATIVEIS:   Cancer e Peixes. \n\n\t\t> VERBO : Controlar","FICHA TÉCNICA DE ESCORPIÃO",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tEscorpião não está aí para brincadeiras, nem perda de tempo - a não ser o tempo que ele mesmo escolhe para se dedicar aos seus passatempos, mas quando isso acontece ele foge do mundo. È difícil conhecer profundamente um Escorpião, a não ser que você também seja um ou que conviva com ele há muito. Você acerta no presente se sabe exatamente qual é o tipo de coisa que provoca sua paixão - nem mais, nem menos do que isso. Escorpião costuma ser um trator no trabalho e geralmente adora o que faz - senão, não faria. Uma boa pedida é presentear com algo relacionado à sua profissão e seu trabalho. Algo que ele possa manter por muito e muito tempo, porque ele não gosta muito do que é efêmero - a não ser das flores naturais, exóticas, raras, que quando murcharem ele guardará em um livro por anos a fio. Escorpião não gosta de esbanjar dinheiro, se sente incomodado com isso - portanto demonstrações de status e riqueza não o abalam. Ele é sensível às intenções verdadeiras, então não se incomode se não tiver como lhe dar um objeto caro; é mais importante que você lembre da data que está sendo comemorada, nem que seja com uma flor colhida no canteiro de uma rua qualquer. Em matéria de perfumes, os quentes e secos, com leves notas adocicadas, os orientais e os extratos. Na música - que ele adora dançar - os ritmos primitivos, as canções místicas de antigamente, os tambores árabes e os solos melancólicos de jazz dos anos 40. Escorpião se reanima com o amor e a paixão, se puder arranje um local distante, impenetrável onde possa passar alguns dias mergulhado na descoberta do outro, sem interrupções.","DICAS ESPECIAIS PARA PRESENTEAR ESCORPIÃO",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                      MessageBox(0, "\n\tInvestigativos, ponderados e realizadores, se sentem realizados em profissões em que possam aplicar seu sexto sentido, como a psicologia, a psiquiatria, a cirurgia, a arqueologia. Por serem bons analistas, se dão bem na economia, e por saberem desvendar e administrar os recursos alheios, na administração financeira. Precisam de rotina fluida, são bons lideres, um tanto rígidos, mas dão exemplo de seu esforço. Precisam sentir a confiança e a lealdade de seus chefes.","PROFISSÕES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                      MessageBox(0, "\n\tVocê é o pior de todos. Você é desconfiado, vingativo, obsessivo, rancoroso, vagabundo, frio, cruel, antiético, sem caráter, traidor, orgulhoso, pessimista, racista, egoísta, materialista, falso, malicioso, mentiroso, invejoso, cínico, ignorante, fofoqueiro e traiçoeiro. Você é um canalha completo. Só ama sua mãe e a si mesmo. Aliás, alguns de vocês não amam nem a mãe. Você é imprestável e deveria ter vergonha de ter nascido. Escorpianos são tiranos por natureza. São ótimos nazistas ou fascistas. Adora pisar os outros e tem um orgasmo quando vê alguém no buraco. Pelo bem dos outros signos do zodíaco, os escorpianos deveriam ser todos exterminados.","LADO NEGRO DE ESCORPIÃO",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - As preliminares são importantes. Neste caso, a estratégia exige certa entrega - ou ao menos deixar que Escorpião pense isso e ache que tem tudo sob controle. Os pertencentes a este signo gostam de ter o papel de sedutores. Seja valente e audaz e Escorpião lhe verá como digno de ser conquistado. Eles gostam de desafios. Também lhe agrada o intelecto e as pessoas que vivem a vida intensamente. Isto despertará o fogo e a paixão deste signo.\n2 - Dá-lhe um toque picante. Quando se trata de sexo, Escorpião quer fazer tudo o que seja humanamente possível para sobressair-se. O sexo é todo um cúmulo de prazer e de possibilidades para os pertencentes a este signo. A rotina lhes aborrecerá e lhes levará às lagrimas. Mantenha a excitação num amante escorpiano e ele será uma máquina sexual.\n3 - A conduta sexual de Escorpião é indomável, e você deve estar à altura. Você tem que ser capaz de manter o nível. Se não compartilhar a adoração de Escorpião nos frequentes encontros passionais, lhe provocará tristeza e ele perderá o interesse como amante.\n4 - É preciso ter cuidado com os escorpianos e não brincar com sua paixão. Eles podem ser letais e vingativos. ","ESCORPIÃO: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM ESCORPIAO

void sagitario()
{
     int opcao;    denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|    ______ ______ ______ ___ ______ ___´__ ______  ___ ______                |\n");
    printf ("|    XXXXXX XXXXXX XXXXXX XXX XXXXXX XXXXXX XXXXXX  XXX XXXXXX                |\n");
    printf ("|    XX|__  XX| XX XX  XX XXX XXXXXX XX| XX XX|  XX XXX XX| XX                |\n");
    printf ("|    XXXXXX XX|_XX XX ___ XXX   XX   XX|_XX XX|__X  XXX XX| XX (22/11 a 21/12)|\n");
    printf ("|       |XX XXXXXX XX XXX XXX   XX   XXXXXX XXXXX   XXX XX| XX                |\n");
	printf ("|    ___|XX XX  XX XX__XX XXX   XX   XX  XX XX  XX  XXX XX|_XX                |\n");
	printf ("|    XXXXXX XX  XX XXXXXX XXX   XX   XX  XX XX   XX XXX XXXXXX                |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE SAGITARIO                          |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 06");
	printf ("|                           4 -  PRESENTES PARA SAGITARIO                     |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE SAGITARIO                    |\n");
	printf ("|                                                                             |\n");
	printf ("|  0 - MENU PRINCIPAL       7 -  SAGITARIO: AMOR E SEXO                       |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tSob um clima astral rico de promessas, você inicia a semana de bem com seus colegas, disposto a colaborar e integrar seu trabalho com o de outras pessoas. Causas em comum terão um apelo especial. Sonhos reveladores. Amor, só se for bem sério.","Previsão pra 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tÀ procura de um sentido\n\tSagitário é o nono signo do Zodíaco, sociável, exploratório e interessado em captar alvos que estimulem o movimento no mundo externo. Como é também um signo de qualidade mutável, sua função é disseminar e adaptar as mudanças com versatilidade e compreensão pelas diferenças existentes nos vários grupos humanos. Para adaptar as verdades relativas, ele busca outras paisagens, pois necessita descobrir o que é comum e verdadeiro para muitos agrupamentos e não apenas a alguns. È um signo que produz pessoas com grande potencial para filosofia, justiça e antropologia. Por ser um divulgador e explorador nato, o Sagitário tem como símbolo a flecha que procura um sentido que será divulgado, ampliando assim a percepção alheia, resgatando princípios universais e superando a visão tacanha da vida. É movido pela inspiração e pela intuição. Por isso, dizemos que Sagitário coloca sua inspiração a serviço de grandes causas sociais, em busca de um sentido que faça as pessoas reunirem-se e expandirem sua vida. O Sagitário tem o espírito de um geógrafo, que descobre novas paisagens - naturais ou imateriais - integrando-as para a melhoria da sociedade. Entre as profissões, encontramos, portanto, muitos adeptos das aventuras e descobertas, das explorações, e também muitos publicitários, editores. Sagitário ensina o que sabe - mesmo que nem sempre cumpra em sua própria vida os ensinamentos que espalha em suas andanças pelo mundo. Sagitário é representado pela figura de um centauro, o que aponta para a qualidade humana e animal que tem dentro de si, em perpétua contradição, que afinal de contas é o que o move na vida. Ao ceder aos desejos que animam seu jeito de viver, entusiasta e positivo, pode se exceder. Dá livre curso a suas vontades, beirando o excesso, pois quer experimentar e explorar o que for possível desta vida. Instável, prefere a mudança, a variedade - o que complica as relações mais duradouras. Seu lado animal pende para a satisfação imediata e positiva dos desejos sensuais, enquanto seu lado humano procura entender essas contradições, podendo encontrar um sentido mais amplo e superar as próprias limitações e desejos descompassados através de uma prática espiritual que o leve à moderação. Contudo, o Sagitário convive e cria em meio a esta dialética que é representada pelo centauro-chefe, Quíron, o mestre-filósofo que tentava curar também as dores alheias tratando de sua ferida incurável. Sagitário irá testar o sentido de vida de qualquer um que cruzar seu caminho. Mas irá agir com generosidade e alegria, compreendendo a natureza humana como ninguém, dono de uma grande capacidade de perdoar - a si e aos outros - que beira a temeridade! Para este signo que luta pelos fracos e oprimidos, a justiça precisa ser cumprida - através da lei, porque não é de acometer contra o 'status quo', preferindo o caminho da convenção ao da revolução. Gosta de fazer justiça com seu exemplo e seu julgamento e é adepto das competições esportivas como forma de educar a juventude, sendo ele próprio muitas vezes um entusiasta e praticante de esportes gregários, onde o mais importante é competir respeitando as regras do jogo, do que se sobressair como um herói. Seu planeta regente é Júpiter, o maior planeta do sistema solar, representando por este simbolismo natural sua grandeza, seu natural dom para ampliar e fazer crescer o que toca. Às vezes, prefere ocultar suas dúvidas aos olhos dos outros, curtindo seu desanimo com a mesquinharia humana em retiro. Por ser um signo que rege o sentido amplo da vida, e a busca por isso acarreta em alguns momentos a melancolia - o sentido escapa e chega a depressão. O fígado, relacionado ao sentido da vida, é regido por Júpiter, sendo o órgão de Sagitário, assim como as coxas e o fêmur. A natureza restaura seu organismo forte, às vezes pressionado pelos excessos de uma vida agitada ou desregrada. Mas Sagitário tem fé para dar e vender e acredita que existe uma luz no final do túnel.\n","PERFIL DE SAGITÁRIO",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e Seco (Fogo) - alta energia e capacidade para separar e delimitar\n\n\t\t> NATUREZA: ativo, masculino, diurno, ímpar\n\n\t\t> POLARIDADE: positivo\n\n\t\t> REGENTE:     Jupiter\n\n\t\t> CORES: azul-real, azul-arroxeado, verde-azulado, escarlate, carmim\n\n\t\t> CORPO: figado, femur, coxas\n\n\t\t> PALAVRAS - CHAVE: Exploracao, Fe, Divulgacao, Versatilidade, Sociabilidade, Otimismo, Espiritualidade, Aventura, Julgamento e Misericordia\n\n\t\t> SIGNOS COMPATIVEIS:   Aries, Leao, Libra e Aquario.> VERBO : Ver","FICHA TÉCNICA DE SAGITÁRIO",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tSagitário gosta de aventuras e novidades que não agridam seu gosto um tanto convencional (salvo outras configurações planetárias existentes). Sabe apreciar a natureza, mas também se move com desenvoltura nos ambientes refinados e da moda. Isso facilita bastante na hora de presentear! Apetrechos de viagem são ótimas pedidas - de livros de viajantes a guias de bolso, passando por dicionários trilíngues (Sagitário é o signo que exibe maior dom para o aprendizado de línguas), até calçados especiais, barracas ultimo tipo, canivetes super equipados, etc. Outro foco preferencial pode ser o esporte. Se souber qual é sua especialidade preferida, apele para isso - na dúvida, roupas de fibras especiais para a prática esportiva são a solução. No campo dos objetos de desejo existem também as colônias amadeiradas, com forte tom seco e agreste, as camisas esportes das boas griffes, e sapatos - fortes e belos para suas caminhadas, quando o sentido da vida está sendo ameaçado. Sagitário adora comer, beber e namorar, dançar e curtir longas conversas sobre os mundos intangíveis, ou contar seus planos de reforma social para a educação popular. Aí as opções são abundantes. Um livro de receitas exóticas (para ele mesmo experimentar fazer em casa), um whisky brindado com o selo da casa real britânica, um CD de música étnica ou world music de boa qualidade e bem feito, um final de semana perto do mato e da cachoeira - são escolhas que farão o coração exuberante do Sagitário bater acelerado e agradecido. Em matéria de cores e texturas, é melhor não arriscar muito. Sagitário sabe entender e apreciar as diferenças culturais, é um lutador pelo direito das minorias, mas dificilmente desfilaria por aí com turbantes berberes, por exemplo. (Ele deixará os turbantes em local de destaque em sua casa, junto a outros tantos objetos pinçados pelo mundo afora). Dê preferência a roupas de corte reto, simples e confortável, confeccionadas em tecidos de textura agradável, em tons sóbrios e escuros, nas cores azul, cru ou branca.","DICAS ESPECIAIS PARA PRESENTEAR SAGITÁRIO",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tInspirados, precisam agir por conta própria, como os seus colegas de signo de elemento fogo, Áries e Leão, os sagitarianos sabem antever o futuro, são desbravadores, se realizam no direito, no turismo, na geografia, nas relações internacionais, no comercio exterior, nas profissões que os obriguem a desbravar territórios desconhecidos. Filósofos por natureza, se dão bem no ensino acadêmico, na filosofia do direito, nas publicações e nas artes da linguagem, por sua tremenda persuasão. Bons vendedores, são chefes natos. Não gostam de rotina rígida.","PROFISSÕES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                      MessageBox(0, "\n\tVocê é um otimista e tem uma forte tendência em confiar na sorte. Isso é bom para você, já que é imprudente, irresponsável, limitado e não possui nenhum talento. Como não tem competência, sempre arruma uma forma de se desculpar de suas burradas na vida. E sempre põe a culpa nos outros. Mas na verdade você que é incompetente mesmo. Você é um teimoso, ambicioso e metidinho. Na verdade, você é um idiota fracassado. Além do mais, seu conceito de ética e moral é limitado. Você é um puxa-saco, galinha e gosta mesmo é de sacanagem. Quando consegue alguma coisa na vida é sempre de forma obscura","LADO NEGRO DE SAGITÁRIO",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                     MessageBox(0, "\n1 - O sexo através do talento. Os sagitarianos não podem nem imaginar um relacionamento com alguém que seja menos capaz do que eles. Para Sagitário, o sexo é uma extensão natural da busca por alguém que lhe preeencha por completo. Um amante sagitariano trata de encontrar respostas no prazer.\n2 - Comunique-se honesta e sinceramente com eles. Os pertencentes a este signo não têm nenhum problema em expressar desejos, necessidades e opiniões. Com Sagitário é preciso ser franco, e eles agradecerão.\n3 - Os sagitarianos valorizam a liberdade e a independência acima de todas as coisas. Este signo estará disposto a renunciar qualquer relação que se converta num ônus. É preciso dar espaço para o amante sagitariano. Se o fizer, ele corresponderá com atenção e paixão.\n4 - Para Sagitário há que encontrar uma mistura entre distância e proximidade. É preciso ter confiança em si mesmo para se relacionar neste terreno com eles. Se fizer desta forma, geralmente os amantes sagitarianos não resistirão e terão o sexo como algo próximo e importante em sua mente.\n5 - Sagitário gosta das coisas novas. Aproveite sua capacidade para aprender, experimentar e converter-se num hábil amante. É preciso estar pronto para qualquer coisa. ","SAGITÁRIO: AMOR E SEXO",MB_OK);
                     goto denovo1;
                     break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM SAGITARIO

void capricornio()
{
     int opcao;    denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|        _____ _____ ______ _____  __ _____ __´__ _____  _   _ __ _____       |\n");
    printf ("|        XXXXX XXXXX XXXXXX XXXXX  XX XXXXX XXXXX XXXXX  X_  X XX XXXXX       |\n");
    printf ("|        XXXXX XXXXX XX| XX XX| XX XX XXXXX XX XX XX| XX XX_ X XX XX XX       |\n");
    printf ("|        XX|   XX_XX XX|_XX XX|_X  XX XX|   XX XX XX|_X  XXX_X XX XX XX       |\n");
    printf ("|        XX|__ XXXXX XXXXXX XXXX   XX XX|__ XX XX XXXX   XXXXX XX XX XX       |\n");
	printf ("|        XXXXX XX XX XX     XX XX  XX XXXXX XX_XX XX XX  XX XX XX XX_XX       |\n");
	printf ("|        XXXXX XX XX XX     XX  XX XX XXXXX XXXXX XX  XX XX  X XX XXXXX       |\n");
	printf ("*____________________________________________________________(22/12 a 21/01)__*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE CAPRICORNIO                        |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 03");
	printf ("|                           4 -  PRESENTES PARA CAPRICORNIO                   |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE CAPRICORNIO                  |\n");
	printf ("|                                                                             |\n");
	printf ("| 0 - MENU PRINCIPAL        7 -  CAPRICORNIO: AMOR E SEXO                     |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tVênus faz com que você, de bom grado, aceite incumbências e trabalho a mais pra fornecer uma base mais segura ou agradável ao seu entorno - este é o tema destes dias. Sua mente capta tudo ao redor. Nem é preciso falar demais. Inspiração.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tTestemunha do passado e construtor do presente\n\tCapricórnio inaugura a estação do verão no hemisfério sul. Signo Cardinal, governa o tempo e os grandes projetos. Décimo signo do zodíaco, o Capricórnio simboliza a disciplina a serviço do projeto que sirva o bem coletivo, devotado às relações humanas. Capricórnio deseja realizar obras para a posteridade, coloca sua organização a serviço da sociedade, exercendo grande controle sobre as paixões e sentimentos pessoais. Parece mais paciente e frio do que na realidade é. Signo de obrigações, deveres, costuma esconder o lado sensual e arcaico. A cabra-peixe, animal fabuloso, é seu símbolo, que tem ligação com as águas do sentimento ancestral. Isto é, por trás da tenacidade de um cabrito, que cava a terra buscando alimento em terreno árido e resiste às situações mais árduas, existe um animal que anseia pela divagação, perda de limites. Capricórnio parece tranqüilo, mas é movido por paixões e desejos como qualquer um. É na arte que Capricórnio mostra esse lado, assim como no humor. Sensual, pois é signo de elemento terra, sua tarefa é melhorar as estruturas existentes. Capricórnio resiste às frustrações, se submete às condições inóspitas para realizar um plano ambicioso de longo prazo e deseja ter o reconhecimento social de seus méritos. Seu jeito leal e determinado, seu temperamento confiável, sério e responsável, mostra segurança no que faz. Observador, Capricórnio despreza a bajulação e o servilismo e não cede ao seu orgulho ferido. Capricórnio rege os joelhos, mostrando sua analogia com a obediência a uma lei maior, ainda que invisível, que move profundamente o signo. Os ossos e a coluna vertebral - estrutura do corpo humano - está sob governo de Capricórnio, pois é ele que cria e mantém a estrutura que sustenta outras, assim como a coluna nos mantém na posição vertical. Signo dos que governam, dos que projetam a administração pública, donos de um sangue-frio próprio dos estrategistas políticos, o Capricórnio está sempre no alto de uma montanha altíssima, de onde olha o mundo e sua feira de vaidades, que no fundo despreza. Seu temperamento retirado e solitário se dá bem nas profissões de pesquisa histórica e arqueológica, bem como em todas as disciplinas que lidam com o tempo e a administração política, já que são engenheiros do tempo. Em qualquer campo, Capricórnio tende a se destacar por seu nível de excelência em sua área, mesmo pagando o preço da diminuição do lazer.\n","PERFIL DE CAPRICÓRNIO",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                     MessageBox(0, "\n\t\t> QUALIDADE: Frio e Seco (Terra) - baixa energia e capacidade para separar e delimitar\n\n\t\t> NATUREZA: passivo, feminino, noturno, par\n\n\t\t> POLARIDADE: negativo\n\n\t\t> REGENTE:  Saturno\n\n\t\t> CORES: marrom e negro\n\n\t\t> CORPO: Coluna, Dentes, Cartilagens, Ossatura, Ouvido Esquerdo, Pele\n\n\t\t> PALAVRAS - CHAVE: Disciplina, Organização, Determinação, Estrategia, Dever, Concentracao, Tempo, Eternidade, Independencia, Realismo, Maestria\n\n\t\t> SIGNOS COMPATIVEIS:   Touro, Virgem, Escorpiao e Peixes.\n\n\t\t> VERBO : Poder ","FICHA TÉCNICA DE CAPRICÓRNIO",MB_OK);                 
                     goto denovo1;
                     break;
                 case 4:
                     MessageBox(0, "\n\nCapricórnio gosta de independência, de permanecer um pouco à parte do burburinho, preza sua reputação e imagem pública e prefere algo de muito valor e aparência simples do que algo espalhafatoso, brilhante ou barulhento demais. A classe, a tradição, a discrição atraem esse signo de poucos amigos, mas leais. Seu gosto é especial - sabe apreciar as linhas simples, retas, clássicas, os metais preciosos e os não tão preciosos assim, mas que são duráveis. Durabilidade e tradição são palavras-chaves para abrir o coração de um Capricórnio. Jóias antigas, livros raros, móveis de madeira de corte simples, reto e para uso prático podem agradar. Capricórnio gosta da natureza - de preferência a selvagem, para agradar seus sentidos, mas adora o conforto que a vida moderna proporciona. Colônias e extratos secos para os homens, um pouco doces para as mulheres caem bem. Bolsas, sapatos e meias fazem a alegria deste signo - mas prefira os materiais consagrados, nada de novidades sazonais. Na música, a preferência deve ir para as obras também antigas, a world music e a música tocada com instrumentos antigos. De modo geral, o melhor do melhor é para ele: o melhor do jazz, o melhor da MPB. Em matéria de cores e texturas,o marinho, preto e cinza-escuro, alternado com o branco são os destaques. Dê preferência a roupas simples, de uso social e profissional, em tons escuros. Em resumo, para presentear bem um Capricórnio, escolha o melhor espécime da categoria, com o nome mais consagrado, no tom mais sóbrio possível. Capricórnio é um clássico até no rock´n´roll - ele identifica e despreza em dois tempos a cópia mal feita de um acorde de Jimi Hendrix, ou a voz que imita a rouca e atormentada irmã de signo Janis Joplin...","DICAS ESPECIAIS PARA PRESENTEAR CAPRICÓRNIO",MB_OK);
                     goto denovo1;
                     break;
                 case 5:
                      MessageBox(0, "\n\nRealizadores por natureza, gostam de ser aplaudidos por seus méritos conquistados por muito esforço, trabalham duro e são muito ambiciosos. Uma vez decidida sua vocação, seguirão firmes em sua direção. De preferência, na administração publica, na política, na historia, pois respeitam o que foi testado no passado. São excelentes chefes, um tanto rígidos, mas sabem trabalhar ao lado de seus subalternos, ganhando sua confiança. Constroem um império na área escolhida e jogam com o tempo. São independentes e precisam de rotina bem delimitada.","PROFISSÕES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                      MessageBox(0, "\n\nVocê é metido a sério, conservador e politicamente correto. Na verdade você é um materialista, falso, ambicioso e safado. Você tem uma tendência de ser enrustido em tudo. Você é frio, não tem emoções e freqüentemente dorme enquanto está transando. Você gosta de manter as aparências e quando encontra um 'amigo', abraça, deseja tudo de bom... Mas na primeira oportunidade puxa o tapete dele e depois vai dormir de consciência tranquila. Você nunca joga limpo e sua frieza faz de você um sanguinário completo. Mas que importa? Se a grana está entrando... ótimo!","LADO NEGRO DE CAPRICÓRNIO",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - É importante propor atividades juntos para que a conquista seja efetiva. Lembre-se que você deve preparar-se fisicamente para ser atraente para os capricornianos, e fazer tudo o que esteja a seu alcance para impressionar sua família e seus amigos.\n2 - De cara ao sexo, convém ser muito transparente com os capricornianos, já que este signo é de natureza cética e não se atreve a confiar nos demais. Quanto mais aberto você seja com eles, mais cômodos eles se sentirão como amantes.\n3 - Também convém ser lento e paciente com eles. Constância e lentidão são dois bons ingredientes para sacar de Capricórnio o melhor o que eles podem oferecer. Recorde que os pertencentes a este signo mostram uma grande resistência à mudança. Isto, somado a sua desconfiança, faz com que em questões de sexo se avance lentamente. Para ajudar-lhes a revelar o verdadeiro amante que guardam dentro de si há que atuar com finura e paciência.\n4 - A perseverança é uma palavra chave para tratar deste tema com Capricórnio. Ainda que possa parecer impossível romper sua couraça exterior, será viável, se perseverar com eles. Com esforço, um amante capricorniano será um apaixonado parceiro sexual.\n5 - Com este signo é possível desfrutar com segurança. Uma vez que você tenha atrapado um capricorniano, seu amor já não irá a nenhum lugar. E, hoje em dia, o sexo seguro é o melhor sexo.","CAPRICÓRNIO: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM CAPRICORNIO

void aquario()
{
     int opcao;    denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|         ______ ______  __  __  ___´__ _____  ___  ______                    |\n");
    printf ("|         XXXXXX XXXXXX  XX  XX  XXXXXX XXXXX  XXX  XXXXXX                    |\n");
    printf ("|         XXXXXX XX| XX  XX  XX  XXXXXX XX| XX XXX  XX  XX                    |\n");
    printf ("|         XX|_XX XX| XX  XX  XX  XX|_XX XX|_X  XXX  XX  XX    (21/01 a 19/02) |\n");
    printf ("|         XXXXXX XX|_XX  XX  XX  XXXXXX XXXX   XXX  XX  XX                    |\n");
	printf ("|         XX  XX XX XXX  XX__XX  XX  XX XX XX  XXX  XX__XX                    |\n");
	printf ("|         XX  XX XXXXXX_ XXXXXX  XX  XX XX  XX XXX  XXXXXX                    |\n");
	printf ("*______________________X______________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE AQUARIO                            |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 02");
	printf ("|                           4 -  PRESENTES PARA AQUARIO                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE AQUARIO                      |\n");
	printf ("|                                                                             |\n");
	printf ("|                           7 -  AQUARIO: AMOR E SEXO       0 - MENU PRINCIPAL|\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tLua em seu signo até fim da tarde pede que inicie a semana devagar, cuidando mais de si mesmo. Volte-se para sua vida privada, irá restauras suas forças e acertar os ponteiros consigo. Apesar disso, sente demais todos a sua volta. Cuide-se.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tAntena do futuro que irradia a mudança\n\tEste é o último signo fixo da seqüência zodiacal, e sua função é distribuir, de forma racional, o que foi criado pela força realizadora do Capricórnio. Como signo fixo que é, sua função é estabilizar e enraizar o que foi iniciado em Capricórnio, um signo de grandes inícios. Para isso, inventará os meios necessários, valendo-se da produção em série, da moda e de ideologias reformadoras. Seu raciocínio agudo e penetrante faz com que se torne presença indispensável onde a vida precisa acontecer com ousadia. Aquário capta tudo com extrema rapidez, antevendo o que ainda não foi criado. Para inventar, é cioso de sua mente, aberta ao novo. Racional, mental, age pensando na coletividade, mais do que em contatos pessoais. Impessoal, preserva sua liberdade a todo custo, fugindo de compromissos estreitos demais ou que ele sinta invadir sua privacidade. Oposto ao signo de Leão, Aquário aspira o poder compartilhado, permanece um solitário que antevê o futuro, desvendando incógnitas e preocupando-se com o que virá. Aberto às inovações, nem sempre Aquário é fácil de mudar de ponto-de-vista. Iconoclasta, afeito a destruir 'ídolos de pés de barro', Aquário pode arremeter com teimosia e frieza contra quem espera controla-lo. Aquário inventor tem como mito principal Prometeu, o semideus que roubou o fogo dos deuses para ofertá-lo aos seres humanos, inaugurando assim a era da civilização. Inclinado a incorporar as novidades tecnológicas que libertem o ser humano da prisão das estruturas, amante da humanidade, volta-se ao futuro das relações humanas, deseja experimentar novas formas de relacionamento. Muitas vezes, às custas de sua emoção e da intimidade emocional que poderia criar com outras pessoas. No amor, Aquário precisa de espaço vital maior do que os outros signos do Zodíaco. Ama e concebe a vida com a cabeça, inspirando-se em idéias que troca com o ambiente. Errático, imprevisível, distancia-se emocionalmente parta se proteger, mas preserva a atitude pacífica, a não ser quando francamente provocado por alguém poderoso e autoritário. Sua natureza racional tende a crer no que pode compreender tudo pelo lado mental e busca razões até para suas emoções. Informal, trata todo mundo da mesma maneira e assim pretende ser tratado. Com seu poderoso manejo da razão, irá convencer a todos de suas crenças - mas não aceita bem as controvérsias, pois, no escuro de sua sombra está Leão, o mais autoritário e 'mandão' de todos os signos do Zodíaco. Quando cerceado em sua liberdade, pode se tornar errático e autoritário. Aquário precisa aprender muito com o relacionamento humano, inclusive a respeitar as emoções alheias sem tratá-las como algo primitivo ou atrasado. No sexo, só se animam de verdade quando percebem ter identidade intelectual com o parceiro. Capazes de grande fidelidade e devotamento detestam ver sua vida privada alvo de bisbilhotice ou fofoca. Aventuras românticas, surpresas e novidades deve fazer parte de sua agenda afetiva se pretende manter uma relação estável por muito tempo. Na saúde, Aquário rege o sistema nervoso periférico e os tornozelos. Um estilo de vida muito agitado e estressante retira e esvazia a vitalidade do Aquário, um signo de saúde delicada e sensível.\n","PERFIL DE AQUARIO",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e Úmido (Ar)-alta energia e grande capacidade para juntar e conectar\n\n\t\t> NATUREZA: ativo, masculino, diurno, impar\n\n\t\t> POLARIDADE: positivo\n\n\t\t> REGENTE:  Saturno (tradicional) e Urano (moderno)> CORES: azul escuro, indigo e negro\n\n\t\t> CORPO: tornozelos, sistema nervoso, sistema circulatório periférico> PALAVRAS - CHAVE:   Futuro, Visao, Liberdade, Ousadia, Romance, Solidao, Experiencia, Racionalidade, Coletividade, Serializacao\n\n\t\t> SIGNOS COMPATIVEIS:   Aries, Gemeos, Libra e Cancer.\n\n\t\t> VERBO : Saber","FICHA TÉCNICA DE AQUÁRIO",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tAquário gosta de tudo o que o signo anterior foge: brilho, ousadia, surpresa, novidade. Originalidade, modernidade ou alta antiguidade, simplicidade e despojamento aceleram seu coração. Aquário tem alma de historiador e adora objetos antigos, bem antigos. É um filho de Saturno e como tal preza o passado arcaico da humanidade. Mais afeito ao ar livre e aos grandes espaços, se sente bem no meio das pessoas - mesmo que não as conheça, o que facilita presentes culturais tais como entradas para a primeira sessão de um filme premiado ou sessões no Planetário de sua cidade. Leitor voraz, Aquário apreciará as teorias revolucionárias, os grandes romances que iniciaram estilos, escolas e modas. Quanto aos perfumes, é melhor escolher as colônias secas e leves. As cores são o azul, índigo, negro e as tonalidades iridescentes, prateadas, com texturas agradáveis ao toque. Na música, assim como nas artes em geral, preste atenção ao seu gosto - que vai do contemporâneo ao arcaico. Possuidor de um agudo olho clínico para pescar novidades que contagiam a coletividade, Aquário descobre o conjunto de funk ou rap que será o sucesso da próxima temporada, assim como encontra verdadeiras relíquias em sebos de bairro. E, se você não nasceu com o Sol em Aquário, não tente competir com ele - aposte no que tem certeza de que ele irá gostar.","DICAS ESPECIAIS PARA PRESENTEAR AQUÁRIO",MB_OK);    printf ("*_____________________________________________________________________________*\n");
                      goto denovo1;
                      break;
                 case 5:
                      MessageBox(0, "\n\tInovadores, pacíficos, teimosos, se realizam nas áreas científicas tecnológicas, na aeronáutica, navegacao, aviacao, mas também nas telecomunicações, na internet, jornalismo etc. Sao criativos, preferem trabalhar por conta propria, sem rotinas rigidas, e sua formacao intelectual e fator de sucesso financeiro. Podem viajar para outros paises, e se darem bem la fora em algum estudo especifico. Como sao um tanto excentricos, podem correr contra as correntes dominantes nas artes e nas ciencias, mas sempre mostram resultados com o tempo.","PROFISSÕES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                     MessageBox(0, "\n\tVocê provavelmente não é desse planeta. Tem uma mente inventiva e dirigida para o progresso. Você mente e comete os mesmos erros repetidamente porque é imbecil e teimoso. Você adora ser o 'do contra'. Pensa que tem opinião formada sobre tudo. Na verdade, você é egoísta e gosta mesmo é de aparecer. Mesmo que esteja entre um milhão de pessoas, você quer ser o diferente. Você nunca segue os padrões. Isso faz de você um metido nojento. Você se acha o moderninho. Acha que está à frente dos outros signos do zodíaco. Você não tem nenhuma moral. Se você for homem deve ser um galinha e, se for mulher, aposto que nem perguntou o nome do último cara com quem dormiu!","LADO NEGRO DE AQUÁRIO",MB_OK);
                     goto denovo1;
                     break;
                 case 7:
                      MessageBox(0, "\n1 - Para flertar, um aquariano tem a favor seu encanto natural, e também desfruta mostrando suas habilidades. Este signo ama o sexo e irradia energia sexual. \n2 - Para esta questão é importante compartilhar intelecto com os pertencentes deste signo. Ter idéias em comum é um primeiro passo. Poderiamos dizer que se o aquariano for introduzido por seu amante em sua visão do mundo, os benefícios serão abundantes dentro e fora do quarto.\n3 - Os aquarianos precisam que lhes ofereçam segurança. A intimidade não é o ponto forte deste signo. Os pertencentes deste signo costumam sentir-se vulneráveis e pouco confortáveis. Se seus pretendentes conseguirem que eles se sintam seguros, compartilharão com eles seus segredos mais profundos.\n4 - Os aquarianos precisam de um espaço próprio. Um pouco de distância permitirá manter sua vida sexual viva, e a relação com são seu amante será ainda mais intensa.\n5 - Seja criativo. O signo de Aquário é um pouco hedonista. O sexo é como um parque de diversões para eles. Encanta-lhes a novidade e a eficiência. Quanto mais formas você encontrar para chegar a obtê-lo/a como amante, melhor resposta obterá dele como tal.","AQUÁRIO: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM AQUARIO    

void peixes()
{
     int opcao;    denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|                 ______ ______ ___ ___    ___ ______ ______                  |\n");
    printf ("|                 XXXXXX XXXXXX XXX XXX_  _XXX XXXXXX XXXXXX                  |\n");
    printf ("|                 XXXXXX XX|    XXX  XXX_XXX   XX|    XX|___                  |\n");
    printf ("|                 XX|_XX XX|__  XXX    XXX     XX|__  XXXXXX  (21/01 a 19/02) |\n");
    printf ("|                 XXXXXX XXXXX  XXX    XXX     XXXXX     |XX                  |\n");
	printf ("|                 XX     XX|___ XXX  XXX XXX   XX|___    |XX                  |\n");
	printf ("|                 XX     XXXXXX XXX XXX    XXX XXXXXX XXXXXX                  |\n");
	printf ("*_____________________________________________________________________________*\n");
	printf ("|                                                                             |\n");
	printf ("|                           1 -  HOROSCOPO DIARIO                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           2 -  PERFIL DE PEIXES                             |\n");
	printf ("|                                                                             |\n");
	printf ("|                           3 -  FICHA TECNICA                                |\n");
	printf ("|                                                                             |\n");system("color 0d");
	printf ("|                           4 -  PRESENTES PARA PEIXES                        |\n");
	printf ("|                                                                             |\n");
	printf ("|                           5 -  PROFISSOES COMPATIVEIS                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           6 -  O LADO NEGRO DE PEIXES                       |\n");
	printf ("|                                                                             |\n");
	printf ("|                           7 -  PEIXES: AMOR E SEXO      0 - MENU PRINCIPAL  |\n");
	printf ("*=============================================================================*\n");
	printf ("| DIGITE OPCAO: ");scanf("%d",&opcao);
	carregar();system("cls");
	switch(opcao)
	{
                 case 0:break;
                 case 1:
                      MessageBox(0, "\n\tMercúrio e Plutão trazem lutas por poder ao cenário, escolha quando e como vai comunicar suas decisões aos mais próximos. Não dá pra controlar todos os dados ao mesmo tempo, desista. Faça a sua parte. No amor, decisões de longo prazo em vista.","Previsão para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\t'Navegar é preciso'\n\tUm ciclo se encerra - algo se extingue ao mesmo tempo em que se pressente o nascimento de algo novo. O navio que singra os mares vastos é símbolo também desse signo, o último da série do zodíaco. É preciso partir, embora não se possa enxergar com clareza o rumo a ser seguido. Não faz mal: os Peixes sempre sabem para onde se deve navegar. È este o signo que escuta os rumores do infinito, que segue o pressentimento, chegando humilde no porto -e sem fazer alarde, dá exemplo de grande misericórdia. Nesse navio, sempre cabe mais um, porque todos podem ser salvos, aliás, todos serão salvos. O tema da salvação e da perdição, a figura do santo e do louco, ambos fazem parte do simbolismo de Peixes, que está sempre na fronteira de dois mundos. Aqui, se aprende que tudo termina no mar - o oceano recebe todas as águas, todos os detritos da civilização também. Sem julgar, ele recebe o que já útil, tragando em suas águas as memórias de centenas de histórias extintas. Para cumprir essa tarefa de extrema compaixão por todas as formas de vida, Peixes é maleável, versátil. É um signo mutável, realmente. Segue com os ventos, que empurram as velas do navio. Isso Talvez seja esse o mistério que Peixes evoca por onde passa. Mas ele não fala, apenas acolhe, mistura todas as pessoas na festa e ela vira um sucesso. Antenado no infinito ele sabe presentear como ninguém - com seu ar distraído, pisando as estrelas, vai captando o que é impalpável, o que não se exibe com clareza - e depois, surge com o presente que fala direto ao coração de alguém. Mas exatamente por esta capacidade, peixes carrega, vez por outra, os detritos da humanidade, na forma de sentimentos e emoções alheias que vão se juntando ao seu sentimento. Por vezes, a carga deste mundo é tão pesada que ele entende o que Cristo (cujo símbolo era um peixes, aliás), queria dizer quando falava 'meu reino não é deste mundo'. O reino de Peixes é o da arte, da música, da poesia, dos espaços siderais também. Viajante eterno, andarilho dos caminhos santos, pescador de almas perdidas, parece ter uma conexão direta com o reino imaterial, com as impressões e imagens. Daí usa a sua maravilhosa imaginação e seu enorme poder de sentir os espaços. Em Peixes, tudo é grande, vasto, infinito. Tanto que, no reino animal o signo rege as baleias e os grandes seres do oceano, assim como os elefantes, que caminham sobre a terra. No desespero, Peixes se perde, já não sabe mais o caminho - desconhece quem é, se desintegra nas mil dores da humanidade e de toda a criação. Alma sensível, sabedoria inata, não quer convencer ninguém, talvez porque entenda tudo. No fundo, perdoa a todos - e se não fizer um esforço para discriminar muito bem o que vive, acaba se fazendo mal. Peixes tende ao escapismo, pois como este não é bem seu mundo, ou tem dificuldade em encontrar um lugar claro para si nas esferas ordenadas da sociedade, termina muitas vezes optando por doar sua simpatia e amor ao que nada tem. É no hospital, no orfanato, no asilo que o Peixes está presente, fazendo as vezes de anunciador de um novo ciclo, barqueiro que ajuda a alcançar uma outra margem do rio. Com os olhos no horizonte largo, os Peixes se destacam nas profissões relacionadas com as relações exteriores, com o comércio de longo alcance, e falam pela música, dança e pela poesia. Os Peixes também estão nos laboratórios de física, estudando os segundos iniciais da criação do universo. Cosmologia é seu tema natural. Alguns se voltam para a fé, outros para a física. Ambos convergem para o mistério do espaço. E por ele, fazem mágica - não se importam em terminar nada, porque sua função é esboçar, anunciar, delinear - outros virão no futuro para dar forma acabada ao que anunciaram. Ao generoso Peixes, só cabe anunciar o sentido ou perguntar-se sobre ele. Toda essa mistura de fantasia, pressentimento, docilidade e sabedoria termina compondo um ser atraente e misterioso. Romântico como ele só, cheio de lirismo, envolve quem ama com mil pequenas surpresas - e muitas vezes escolhe mal seu parceiro, para depois sofrer - Peixes tem uma pequena queda para o sofrimento. No amor, usa e abusa de seu poder de descobrir o que não é revelado - mas não para controlar, mas para ter um encontro de alma mais profundo e completo. Por ser instável como o oceano, curioso e explorador, pode não se adaptar muito bem à vida do casamento, embora seja um dos amantes mais devotados do zodíaco. Os Peixes regem os pés, que carregam todo o peso do corpo, limite mais humilde - e fundamental, pois são eles que nos carregam para toda parte. Sem prestar muita atenção onde coloca os pés, Peixes de tempos em tempos é lembrado de sua conexão com a terra por meio de afecções nessa parte do corpo. Aos poucos, sua alma antiga vai aprendendo que também é preciso manter os pés na terra para poder continuar anunciando o mundo que pressente. Além disso, Peixes tem relação com o sistema linfático - um dos sistemas que carrega líquidos por nosso corpo - e o centro de energia (chakra) da coroa, por onde os orientais dizem entrar a energia do universo.\n","PERFIL DE PEIXES",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE:Frio e Úmido (Agua)-baixa energia e grande capacidade para juntar e conectar\n\n\t\t> NATUREZA: passivo, feminino, noturno, par\n\n\t\t> POLARIDADE: negativo\n\n\t\t> REGENTE:  Jupiter (tradicional) e Netuno (moderno)\n\n\t\t> CORES: azul-mar, verde-azulado, cinza-esverdeado, tons iridescentes\n\n\t\t> CORPO: pes, sistema linfatico\n\n\t\t> PALAVRAS - CHAVE: Compaixao, Emocao, Infinito, Intuicao, Romantismo, Altruismo, Devocao, Piedade, Escapismo\n\n\t\t> SIGNOS COMPATIVEIS:   Aries, Gemeos, Libra e Cancer.\n\n\t\t> VERBO : Crer  ","FICHA TÉCNICA DE PEIXES",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tPeixes adora surpresas feitas com presentes originais, escolhidos especialmente para sua alma lírica e romântica. Como adora viajar e sabe apreciaras artes e a musica, um ótimo presente são os CDs de world music, os instrumentos musicais. Também adora perfumes, essências quentes e exóticas, roupas despojadas, mas com um certo toque romântico. Peixes representa o mundo alternativo - este filho de Júpiter adora a boa literatura e a poesia que proporcionam a ele a oportunidade de sonhar com um mundo realmente mais misericordioso e amável. Bucólico, ama a natureza e seus diversos habitantes e ruídos - os passarinhos, as baleias, de preferência as paisagens próximas ao oceano. Peixes sente grande atração pelos grandes espaços, sentindo-se a vontade bem no meio da massa de pessoas, onde se torna indistinto, por vezes, para ressurgir com novas idéias repletas de poesia, para maravilhar as pessoas. Signo da fotografia, do cinema, da cenografia, pois rege a ilusão e a fantasia, você acerta em presenteá-lo com uma filmadora, uma câmera de fotografia, uma coleção de filmes em vídeo. Preste atenção ao que o encanta, se quiser acertar e cheio - cada filho deste signo possui um mundo interior riquíssimo e variável como o oceano e os espaços siderais que tanto o atraem.","DICAS ESPECIAIS PARA PRESENTEAR PEIXES",MB_OK);    printf ("*_____________________________________________________________________________*\n");
                      goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tArtistas sensiveis por natureza, os piscianos se realizam em carreiras em que tenham de viajar muito, como turismo, diplomacia, direito internacional, vendas internacionais, pois apelam ao sentimento das pessoas. Quando artistas, liricos na musica, na poesia, no canto e danca. Se dao bem em atividades fluidas, que nao tenham pressa para serem concluidas, preferem rotinas elasticas, e podem mudar de atividade e ramo conforme as epocas.","PROFISSÕES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                      MessageBox(0, "\n\tVocê pensa que todo mundo é cabeça de bagre e só você é o esperto. O que você não sabe é que, na verdade, você é o grande cabeça de bagre. Você se acha o sujeito mais inteligente do mundo e tem a maldita mania de achar que os outros precisam de sua ajuda. Você se acha superior e considera os outros idiotas. Adora reprimir tudo e todos. É impaciente, mal-educado e fica dando conselhos fúteis aos outros e sempre consegue afundar as pessoas que seguem seus conselhos idiotas. Você não passa de um desorganizado, não tem praticidade alguma e não sabe nem em que planeta vive. Quando alguém te questiona, você recorre ao misticismo, uma vez que sua inteligência é limitada.","LADO NEGRO DE PEIXES",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - Você terá que utilizar todas as suas habilidades para cortejar-lhes. Os piscianos vivem em outro mundo.\n2 - Os pertencentes a esse signo são do tipo emocional. Assim que o sexo será melhor num contexto de amor e intimidade. Para conectar com eles você deverá ter sempre em mente que os amantes piscianos procuram, em realidade, uma alma parceira e amiga.\n3 - Para comprazer um amante pisciano você terá que passar algum tempo no reino da fantasia. Sonhe conjuntamente com ele e será recompensado com amor puro e um sexo muito especial.\n4 - Mas, paradoxalmente, em relação ao sexo como casal ele lhe obrigará a ser prático. Ainda que os piscianos queiram reter-lhe em seu mundo de sonhos e fantasia, você deverá ajudar-lhes a transladar sua energia para que ponham os pés no chão. Caso contrário, os dois flutuarão para fora da realidade, e a vida no mundo real acabará fazendo cobranças. ","PEIXES: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OPÇÃO INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM PEIXES
// ================================================================================
//================================================================================
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{
      // variaveis
	char nome[20],texto[20],buffer[20];
    int opcao;
    //inicio
	system("color 06");
	printf ("#_____________________________________________________________________________#\n");
	printf ("|                                                                             |\n");
    printf ("|           ________ ___     ___ ________  _________ _________   ____         |\n");
    printf ("|           XXXXXXXX XXX     XXX XXXXXXXX  XXXXXXXXX XXXXXXXXX   XXXX         |\n");
    printf ("|           XXXXXXXX XXX     XXX XXXXXXXX  XXXXXXXXX XXXXXXXXX   XXXX         |\n");
    printf ("|           XXX_____ XXX     XXX XXX       XXX___XXX XX_____XX   XXXX         |\n");
    printf ("|           XXXXXXXX XXX     XXX XXX       XXXXXXXXX XXXXXXXXX   XXXX         |\n");
    printf ("|           XXXXXXXX XXX     XXX XXX       XXXXXXXXX XXXXXXXXX   XXXX         |\n");
    printf ("|           XX       XXX_____XXX XXX_____  XXX   XXX XX          XXXX         |\n");
    printf ("|           XX       XXXXXXXXXXX XXXXXXXX  XXX   XXX XX          XXXX         |\n");
    printf ("|           XX       XXXXXXXXXXX XXXXXXXX  XXX   XXX XX          XXXX         |\n");
    printf ("|                                                                             |\n");
    printf ("#_____________________________________________________________________________#\n");
    printf ("|                                                                             |\n");
    printf ("|                                                                             |\n");
    printf ("|                    Developed by:  DANIELA DUARTE - MAI-1                    |\n");
    printf ("|                                                                             |\n");
    printf ("#_____________________________________________________________________________#\n");
    printf ("|                                                                             |\n");
    printf ("|                                                                             |\n");
    printf ("|                          |   ESOTERISMO SYSTEM    |                         |\n");
    printf ("|                                                                             |\n");
    printf ("#-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-#\n");
	printf ("| INSIRA SEU NOME : ");
    gets(nome);
    system("cls");
    strcpy(texto,"SEJA BEM VINDO(a) ");
    sprintf(buffer,"%s",nome);
    strcat(texto,buffer);
  //  strcat(texto," :D");
    MessageBox(0,texto,"Esoterismo System",MB_OK);
    MessageBox(0,"Este e um programa divertido sobre esoterismo. Na proxima tela, selecione\num signo e verifique\ncompatibilidades de signos, perfis, dentre outras coisas.\n\nOBS: As informações contidas neste programa destinam-se meramente ao entretenimento e informação alheios.\nCabendo a cada um tirar suas próprias conclusões.\n\nDivirta-se!!   ;D\n\n\t\t\t\\o/","Esoterismo System",MB_OK);
    pensamentoDoDia();
    carregar();
     signos:
            
            system("cls");
     system("color 03");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|               ______  ____ ________ _   __  ________ ______                 |\n");
    printf ("|               XXXXXX  XXXX XXXXXXXX X_  XX  XXXXXXXX XXXXXX                 |\n");
    printf ("|               XXX|__  XXXX XX|  ___ XX_ XX  XX|  |XX XXX|__                 |\n");
    printf ("|               XXXXXX  XXXX XX|  XXX XXXXXX  XX|  |XX XXXXXX                 |\n");
    printf ("|               ___XXX  XXXX XX|___XX XX XXX  XX|__|XX ___XXX                 |\n");
	printf ("|               XXXXXX  XXXX XXXXXXXX XX  XX  XXXXXXXX XXXXXX                 |\n");
	printf ("|_____________________________________________________________________________|\n");
	printf ("|                                                                             |\n");
	printf ("|                                                                             |\n");
	printf ("|        1 - ARIES (21/03 a 20/04)        7 - LIBRA  (23/09 a 22/10)          |\n");
	printf ("|                                                                             |\n");
	printf ("|        2 - TOURO (21/04 a 20/05)        8 - ESCORPIAO (23/10 a 21/11)       |\n");
	printf ("|                                                                             |\n");
	printf ("|        3 - GEMEOS (21/05 a 20/06)       9 - SAGITARIO  (22/11 a 21/12)      |\n");
	printf ("|                                                                             |\n");
	printf ("|        4 - CANCER (21/06 a 21/07)       10 - CAPRICORNIO (22/12 a 20/01)    |\n");
	printf ("|                                                                             |\n");
	printf ("|        5 - LEAO  (22/07 a 22/08)        11 - AQUARIO (21/01 a 19/02)        |\n");
	printf ("|                                                                             |\n");
	printf ("|        6 - VIRGEM (23/08 a 22/09)       12 - PEIXES (20/02 a 20/03) ________|\n");
	printf ("|                                                                     0 - SAIR|\n");
	printf ("*=============================================================================*\n");	
	printf ("| Digite o codigo do signo desejado: ");scanf("%d",&opcao);system("cls");
	pensamentoDoDia();
	switch(opcao)
	{
               case 0:break;
               case 1:
                    aries(); carregar(); goto signos; break;    
               case 2:
                    touro(); carregar(); goto signos; break;
               case 3:
                    gemeos(); carregar(); goto signos; break;
               case 4:
                    cancer();carregar();goto signos;break;                    
               case 5:
                    leao();carregar();goto signos;break;
               case 6:
                    virgem();carregar();goto signos;break;
               case 7:
                    libra();carregar();goto signos;break;
               case 8:
                    escorpiao();carregar();goto signos;break;
               case 9:
                    sagitario();carregar();goto signos;break;
               case 10:
                    capricornio();carregar();goto signos;break;
               case 11:
                    aquario();carregar();goto signos;break;
               case 12:
                    peixes();carregar();goto signos;break;
               default: 
                       MessageBox(0,"CODIGO INVÁLIDO. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto signos;
                        }// fim switch
	MessageBox(0,"\nOBRIGADA POR UTILIZAR O ESOTERISMO SYSTEM!!\n\t     ATÉ A PRÓXIMA...\n\nDESENVOLVIDO POR: Daniela Duarte\nPROFESSOR: Manfrine Silva Santos\nTURMA: MAI - 1\n\n\t\t\\o/","Esoterismo System",MB_OK|MB_ICONINFORMATION);
	
} // fim Esoterismo System





