
/* NOME: Sistema Esot�rico
   DESENVOLVIDO POR: Daniela Duarte Carneiro Manoel
   PROFESSOR: Manfrine Silva Santos
   1� M�dulo - T�cnico em Inform�tica
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
                    MessageBox(0,"'O peixe v� a isca, e n�o v� o anzol.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 3:
                    MessageBox(0,"'Todos acabamos por crescer e por perder aquela tao sagaz vis�o do mundo...\nEsquecemos o brilho do orvalho, \na sombra das �rvores,\na fuga da aranha, \na luz dos charcos. \nPassamos o viver absorvidos pela preocupa��o. E vemos os dias correr, nublados, uns iguais aos outros.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 4:
                    MessageBox(0,"''Procure ser simples. Viver-se com simplicidade � mais do que um ato de virtude. � tamb�m um ato de intelig�ncia.","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 5:
                    MessageBox(0,"'A paz resulta, n�o da aus�ncia de conflitos na nossa vida mas da nossa capacidade de contorn�-los.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 6:
                    MessageBox(0,"'N�o se preocupe com os defeitos dos outros mas com os seus.\nProgrida.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 7:
                    MessageBox(0,"'Quando o jogo de xadrez termina, o rei e o pe�o s�o colocados na mesma caixa.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 8:
                    MessageBox(0,"'Isto acima de tudo: S� verdadeiro contigo pr�prio.(William Shakespeare)'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 9:
                    MessageBox(0,"'Quando deixamos de aprender, envelhecemos. O segredo da juventude eterna � a aprendizagem.'","Esoterismo System - Pensamento do Dia",MB_OK);
                    break;
               case 10:
                    MessageBox(0,"'N�o julguemos os outros antes de nos termos colocado no seu lugar.'","Esoterismo System - Pensamento do Dia",MB_OK);
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
                      MessageBox(0,"\n\tPela manh�, energia e foco pra cuidar do planejamento da semana e agendar todos os compromissos importantes. Depois, a vibra��o da Lua em Peixes acentua sua necessidade de recolhimento, romantismo e paix�o. Conex�o poderosa no amor.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:             
                      MessageBox(0, "\n\t�ries simboliza os in�cios. � o primeiro signo que inaugura a ronda do Sol atrav�s do zod�aco fixo celeste. S�mbolo do Cordeiro de Deus, do Menino-Deus do cristianismo, representa o frescor, a integridade e a espontaneidade.\n �ries quer fertilizar e manifestar sua for�a de maneira vis�vel. Aprendendo a ajustar-se �s press�es e � presen�a do mundo, pode chegar a realizar muito do que deseja, principalmente se cultivar a persist�ncia e\n um certo esp�rito distanciado, pelo menos de vez em quando.\n �ries lidera as pessoas naturalmente, mas n�o porque deseje ser l�der, mas sim porque quer o poder para \nfazer as coisas sem que ningu�m fa�a cobran�as. O que significa que �ries aguenta bem a solid�o da impopularidade e n�o precisa de tanto refor�o social ou aprova��o quanto outros signos. Assim, torna-se o prot�tipo do her�i de qualquer �poca, que segue sua trilha solit�ria e pioneira mesmo sob a descren�a ou a vaia dos outros.\nA qualidade do Fogo, que anima o �ries, fala muito alto. N�o h� muita preocupa��o em saber se a a��o � razo�vel, prudente, pr�tica ou at� mesmo eficaz. O urgente � agir. �ries gasta mais energia do que recebe. Lida muito mal com hipocrisias e mentiras e prefere as explos�es de raiva de curta dura��o \nao �dio temperado em banho maria anos a fio.\n","PERFIL DE �RIES",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                       MessageBox(0, "\n\t\t> QUALIDADE: Quente e Seco(Fogo) - alta energia e capacidade de separar e cortar\n\n\t\t> NATUREZA: ativo, masculino, diurno, impar.\n\n\t\t> POLARIDADE: positiva\n\n\t\t> REGENTE: Marte\n\n\t\t> CORES: branca e vermelha\n\n\t\t> CORPO: c�rebro e funcoes vitais\n\n\t\t> PALAVRAS - CHAVE: Verdade, Impulso Vital, Acao, Energia, Iniciativa, Personalidade Imposicao, Luta.\n\n\t\t> SIGNOS COMPATIVEIS: Gemeos, Leao, Sagitario, Aquario\n\n\t\t> VERBO : Querer","FICHA T�CNICA DE �RIES",MB_OK);                 
                       goto denovo1;
                       break;
                 case 4:
                      MessageBox(0, "\n\t�ries � um signo de a��o, movimento, pioneirismo e desafios, portanto tem rela��o com esportes que tenham este perfil, tais como paraquedismo, boxe, enduros, corridas. O esp�rito de luta cai bem com um cotidiano variado, em que tenha de abrir portas e caminhos novos em empreeendimentos. Quanto � alimenta��o, s�o aconselhadas simplicidade e frugalidade, bem como doses adequadas de prote�nas para manter o t�nus e o �nimo. �ries n�o gosta muito de altas elabora��es culin�rias, e prefere ver com clareza os alimentos que come. Passional e sensual, prefere sempre o caminho mais reto, direto e curto para conquistar os seus objetos de desejo. Roupas de corte e tonalidade simples, que n�o tolham os movimentos e sejam f�ceis de manter, s�o mais aconselhadas. Odores secos e leves s�o os indicados na hora de escolher perfumes. M�sica, pintura e escultura expressivas costumam ser mais atraentes para algu�m de �ries do que uma apresenta��o de bal� rom�ntico, por exemplo, ou um concerto de m�sica de c�mara. O senso estrat�gico de �ries � naturalmente agu�ado e a mente est� sempre alerta - o que facilita um bom desempenho em fun��es arriscadas e arrojadas, mas que n�o exijam alto grau de esfor�o continuado. Assim, o poker cai melhor do que o xadrez, e a sinuca, melhor do que um quebra-cabe�as. A literatura de viagem e as biografias de homens que fazem a pr�pria lei encantam �ries. Por ser um signo de impulso e impaci�ncia, �ries aceita bem o papel de her�i solit�rio em muitos campos da vida. Mas, apesar de ser um iniciador, n�o tem tempo para consolidar as conquistas que faz.\n","DICAS ESPECIAIS PARA PRESENTEAR �RIES",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                      MessageBox(0, "\n\tProfiss�es que exijam lideran�a, pioneirismo, estrat�gia, intui��o. S�o empreendedores, impacientes e gostam de desafios. Devem ter liberdade de a��o e rotinas male�veis. Empres�rios na �rea de metalurgia, constru��o, engenharia, cirurgi�es, vendas - marketing agressivo, avia��o, navega��o, podem fazer carreira na �rea militar ou cientifica. Se destacam nos esportes competitivos tamb�m.\n","PROFISS�ES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                      MessageBox(0, "\n\tVoc� � metido a honesto, sincero e se acha um l�der natural. O problema � que voc� faz tudo ao contr�rio e n�o consegue influenciar ningu�m. Voc� gosta de chegar a um determinado lugar e 'botar pra quebrar'. Isso faz de voc� um ignorante completo. Na verdade, voc� arruma confus�o em todo lugar que passa, simplesmente porque voc� quer fazer as coisas do seu jeito, nem que seja na base da porrada. O que voc� quer mesmo � poder. Voc� quer chegar ao poder nem que tenha que f... todos em sua volta. A sorte dos outros signos do zod�aco � que voc� nunca consegue chegar ao poder. Falta intelig�ncia.\n","O LADO NEGRO DE ARIES",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - Com �ries � preciso se preparar um pouco para 'ser ca�ado'. O signo do carneiro adora o desafio e desfruta com a sedu��o. �ries � atra�do pela paix�o, a intelig�ncia e a intensidade.\n2 - A vida sexual com eles pode ser realmente assombrosa. � preciso ter a mente aberta, j� que os arianos s�o uma esp�cie de exploradores sexuais. Querem provar tudo o que existe sob o sol. O sexo para eles � uma aventura.\n3 - Com �ries � preciso ser en�rgico. Variedade, espontaneidade e entusiasmo s�o claves para manter um amante de �ries satisfeito. � preciso lembrar que os pertencentes a este signo se aborrecem facilmente. E o sexo � o 'entretenimento' de �ries. Assim que, se prepare para que isso seja um bom show!\n4 - Tranq�ilize-o. Ainda que aparentem ser muito seguros de si mesmos, t�m um grande medo de serem rejeitados. Os amantes arianos precisam saber que voc� est� totalmente com eles.\n5 - A rela��o sexual com um ariano requer confian�a. �ries n�o � apto para os sentimentalismos. Podem ser calculistas e insens�veis, por tanto voc� dever� ter confian�a em si mesmo para que a coisa funcione. � frequente ter discuss�es com eles, ainda que isso sim, ter� a vantagem de um amante que se passa por artista quando se trata de sexo.\n","ARIES: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                         MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR);goto denovo1;
                 
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
                      MessageBox(0,"\n\tV�nus e Saturno continuam fazendo a blindagem no seu setor financeiro, o que � �timo pra voc� finalmente negociar com vistas a realizar algo digno de nota neste campo. As coisas finalmente andam no plano material. Curiosidade mental em alta.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\tTouro representa o trabalho, o esfor�o de materializa��o do impulso vital iniciado por �ries. Segundo signo zodiacal, marca o per�odo de consolida��o da esta��o, como todos os outros signos fixos que se seguem. Simbolizado pelo Touro, animal de trabalho, paciente que ara os campos e ajuda a fertilizar a terra, representa tamb�m os cinco sentidos que podem extrair valor e beleza da vida. Apegado aos h�bitos, um pouco t�mido, de boa paz e uma enorme capacidade de realiza��o, � o signo de fil�sofos, que constr�em solidamente sistemas de pensamento. Tamb�m � o signo dos artistas que tecem com as m�os a forma ideal que seu esp�rito concebe, sempre com a sabedoria construtora de respeito � vida. Touro � o signo de quem faz da vida uma obra de verdadeira arte, mesmo sem ser artista por profiss�o. Touro ensina as pessoas a se adaptarem �s circunst�ncias reais, trabalhando com afinco para alterarem o que lhes desagrada. Signo de sensa��o, de total engajamento ou descompromisso afetivo com o mundo, � dif�cil encontrar algu�m que tenha nascido com este signo solar e que se omita da vida e de seus problemas. A qualidade da Terra, que anima o Touro, induz a rendi��o total � realidade. Nada que n�o implique em escolhas e valores, dos quais Touro tem um sentido muito preciso e agudo. Ponderados, am�veis, sens�veis, de boa f�, os filhos do Touro se encolerizam com poucas coisas nesta vida. Algumas delas: a infidelidade, o descompromisso, a pregui�a. Sensuais, s�o presas f�ceis das belas apar�ncias, antes dos trinta anos. Depois, somente se deixam enlevar por quem ou o qu� possui a beleza e a harmonia internas, reais. Acostumado �s pressoes, persistente, determinado, vai o Touro seguindo seu caminho em seu passo lento, arando a terra e alimentando os outros seres vivos.\n","PERFIL DE TOURO",MB_OK);                      
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Frio e Seco(Terra)- baixa energia e capacidade de separar e cortar.\n\n\t\t> NATUREZA: passivo, feminino, noturno, par.\n\n\t\t> POLARIDADE: negativa\n\n\t\t> REGENTE: Venus \n\n\t\t> CORES: verde e azul\n\n\t\t> CORPO: garganta, ovarios, seios, voz\n\n\t\t> PALAVRAS - CHAVE: Estabilidade, Fertilidade, Amor, Sentimento, Arte, Possessividade, Cooperacao, Valores, Escolhas\n\n\t\t> SIGNOS COMPATIVEIS: Cancer, Virgem, Capricornio e Peixes\n\n\t\t> VERBO : Ter ","FICHA T�CNICA DE TOURO",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tTouro � um signo sensual, criativo, pac�fico, que teima em fazer as coisas de seu jeito. Caminhadas em meio a belas paisagens toca o cora��o dos filhos do Touro. Nada de esportes extenuantes e violentos - a n�o ser o desempenho sexual, um esporte em que o Touro costuma se distinguir com louvor... Sens�vel a todos os prazeres dos sentidos, os quais tem naturalmente bem desenvolvidos, Touro � um dos signos mais f�ceis de presentear. Da culin�ria aos objetos de arte, passando pelos perfumes e a m�sica, as flores e os tecidos agrad�veis ao tato, tudo faz a alegria deste ser que � simples mas que ama ser bem presenteado e gosta de abund�ncia. A riqueza material atrai o Touro porque ela permite a satisfa��o dos desejos e seu desejo de acumular s� obedece a um instinto natural de preserva��o da vida. Se presentear com roupas, prefira os tons de terra e de tecido sensuais, de talhe simples e sem rebuscamentos. Os perfumes devem ser levemente doces e florais, com cheiro de terra molhada, como a chuva da primavera. De todas as artes, escolha a m�sica - os cantos antigos e simples das popula��es rurais - a pintura, a escultura e a gastronomia. Touro gosta de filosofar, principalmente depois de alimentar-se bem. Mas seu gosto adere ao otimismo e � conserva��o, pois n�o se sente bem destruindo as coisas criadas pelo homem ou pela natureza.","DICAS ESPECIAIS PARA PRESENTEAR TOURO",MB_OK);   printf ("*_____________________________________________________________________________*\n");
                      goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tProfiss�es que requeiram persist�ncia, determina��o, que operacionalizem id�ias criadas por outras pessoas, s�o reflexivos e constantes. Criativos, os taurinos se realizam em todo e qualquer trabalho relacionado �s artes. Precisam de rotina,seguran�a financeira e bom ambiente de trabalho. Artes em geral - canto, dan�a, musica, cer�mica, cestaria etc - administra��o financeira, produ��o e operacionaliza��o, gerencia de produtos, de compras e respons�veis pela produ��o numa empresa.","PROFISS�ES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                     MessageBox(0, "\n\tVoc� � materialista e trabalha como um condenado. As pessoas pensam que voc� � um p�o-duro, cabe�a-dura, m�o-de-vaca, est�o certas. Al�m disso, voc� � um teimoso desgra�ado que faz s� burrada na vida e continua fazendo, fazendo, fazendo...Voc� deve estar se perguntando... Por que eu trabalho tanto e s� me ferro? A resposta � simples: sua cabe�a-dura n�o deixa voc� enxergar um palmo al�m do seu nariz. Por isso que voc� trabalha como um condenado e nunca consegue subir na vida. S� leva fumo! E gra�as a sua teimosia idiota, continua levando, levando, levando...","LADO NEGRO DE TOURO",MB_OK);
                     goto denovo1;
                     break;
                 case 7:
                      MessageBox(0, "\n1 - Com Touro � preciso ser aberto e honesto em rela��o ao sexo. Eles procuram a seguran�a acima de tudo. Uma boa comunica��o deixa os amantes pertencentes a este signo com uma boa predisposi��o mental. Um bom conselho � deixar que seu amante taurino saiba o que voc� est� pensando. \n2 - A estabilidade excita a conduta sexual deste signo. Seu car�ter � rom�ntico e orientado � rela��o, e ele desfruta sentindo-se amado. Detalhes singelos, como mostrar afeto, pegar na m�o ou dar beijos apaixonados acendem a chama sexual do taurino. O sexo para Touro � a demonstra��o da devo��o que sentem pela pessoa que amam.\n3 - D� uma chuva de presentes a um taurino e ter� meio caminho andado. O resto vir� atrav�s da arte que voc� empregue para cortej�-lo. Touro desfruta com o luxo, mas tamb�m com as coisas baratas. Em realidade, este signo v� o prazer como um presente, e o orgasmo ser� seu principal presente.\n4 - Uma promessa de lealdade eterna �, sem d�vida, o maior afrodis�aco para um amante taurino. Os pertencentes a este signo podem chegar a ser extremamente ciumentos e possessivos. Um conselho: � preciso temer a for�a do 'touro' quando ele se enfurece (tanto homens como mulheres). ","TOURO: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
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
                      MessageBox(0,"\n\tConcentre todas as decis�es mais serias para a pr�xima 4� feira. At� l� voc� estar� perceptivo e imaginativo, captando as ondas do que vem vindo por ai. Antenado com os sonhos, descobrir� respostas incr�veis para perguntas dif�ceis de amor.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tO rep�rter do Zod�aco, G�meos\n\tEste � o primeiro signo mut�vel do zod�aco e representa o momento da divis�o e do movimento da estabilidade representada pelo signo anterior, Touro. G�meos � um signo masculino e ativo, do elemento Ar, e isso significa que � relacional, voltado para a troca com as pessoas, sempre atuando de maneira a criar situa��es de movimento, em que possa dar livre curso � curiosidade. � o signo que preside a versatilidade, a inquietude e a juventude, como seu regente planet�rio, Merc�rio, que tem asas nos p�s. A mudan�a no modo de pensar e a premente vontade de ir de um lugar para o outro tornam este signo o comunicador do Zod�aco, mais interessado em saber de tudo um pouco do que profundamente de uma coisa s�. Portanto, n�o � o signo do especialista nem do s�bio, que se tranca em seu laborat�rio. Ao contr�rio, G�meos rege as comunica��es e as estradas, os estudos e a rela��o com os colegas, o meio ambiente imediato, todos os que trabalham com o com�rcio e a tradu��o das linguagens. A inconst�ncia de G�meos nasce da sua necessidade permanente de experimentar, comunicar, trocar id�ias, disseminar informa��es. Por isso � que o signo de G�meos � considerado o rep�rter do Zod�aco. No passado, G�meos era o signo relacionado com os fil�sofos, os gram�ticos, os literatos, os matem�ticos e os astr�logos - toda uma categoria de pessoas que trabalha com linguagens. A sede de conhecimento de G�meos � forte e sua tend�ncia � dispersar a aten��o em muitas dire��es, pois � um signo de nervosismo, atividade cerebral pronunciada e indecis�o. � este o signo que representa a capacidade de convencer pela palavra, sendo importante nas atividades que requerem esse poder de transformar filosofias em id�ias aplic�veis.\n","PERFIL DE G�MEOS",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e Umido(Ar)- alta energia e capacidade de juntar e conectar.\n\n\t\t> NATUREZA: ativo, masculino, diurno, impar.\n\n\t\t> POLARIDADE: positiva\n\n\t\t> REGENTE: Mercurio\n\n\t\t> CORES: azul e turquesa\n\n\t\t> CORPO: maos, dedos, bracos e antebracos\n\n\t\t> PALAVRAS - CHAVE: Mobilidade, Curiosidade, Versatilidade, Aprender, Destreza manual, inteligencia pratica, linguagens.\n\n\t\t> SIGNOS COMPATIVEIS: Gemeos, Libra e Aquario.\n\n\t\t> VERBO : Pensar e ir","FICHA T�CNICA DE G�MEOS",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                         MessageBox(0, "\n\tN�o � dif�cil presentear G�meos, o signo mais curioso e inst�vel de todo o Zod�aco. Basta prestar aten��o na �rea de interesse atual que ele exibe para voc� acertar em cheio! G�meos adora ler a respeito de seus interesses, mas confira para ver se ele ainda est� pesquisando o mesmo tema do ano passado ou descobriu algo mais interessante. Como este n�o � um signo enfatuado, nem amante de prazeres sofisticados, algo que tenha um perfil atrativo, que inclua algum uso da sua capacidade de racioc�nio e destreza manual fazem a sua alegria. Al�m dos livros, � claro! Todo G�meos guarda algo da crian�a curiosa que desmonta rel�gios para saber como funcionam. Voc� pode escolher objetos para as m�os - de luvas a an�is, de braceletes a canivetes, canetas, lapiseiras, jogos de armar, passatempos... Xadrez, baralho, damas, quebra-cabe�as, tudo � bem vindo na vida deste habitante cosmopolita que prefere a cidade ao campo e a banca de jornais da pra�a ao final de semana em uma casinha remota no alto de uma montanha. A comunica��o � uma das suas maiores paix�es - e tamb�m facilidades. Assim, voc� tamb�m agrada quando presenteia o nativo de G�meos de qualquer objeto relacionado a isso. Computadores de m�o, que possam ser carregados para qualquer local, at� um modem mais veloz para suas viagens intern�ticas ser� boa pedida. Quanto �s cores, d� prefer�ncia aos azuis, verdes e matizes rajados, as estampas mi�das e coloridas, aos temas cotidianos da vida urbana. Entre os perfumes, os de tonalidade fresca, seca e primaveril. Na m�sica, os virtuoses e os solistas, o jazz e a m�sica popular urbana.","DICAS ESPECIAIS PARA PRESENTEAR GEMEOS",MB_OK);    printf ("*_____________________________________________________________________________*\n");
                         goto denovo1;
                         break;
                 case 5:
                     MessageBox(0, "\n\tComunicativos, inventivos e engenhosos, se realizam em profiss�es em que possam incluir boa dose de inova��o, relacionamento com pessoas e estudo, informa��o e express�o. �rea de educa��o, treino e ensino, comunica��es, jornalismo, internet, agencia de viagens, turismo, rela��es publicas, propaganda, artes manuais em geral, e na �rea medica como massagistas, dentistas, quiropraticos etc. Precisam de ambiente arejado, estimulo de colegas e rotinas flex�veis. Tendem a ter dois empregos, duas voca��es, duas profiss�es ao longo da vida.","PROFISS�ES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                     MessageBox(0, "\n\tO geminiano � capaz de parar o sexo com voc�, s� para ver o novo clip da Amy Winehouse e depois volta com o mesmo fogo de antes, enquanto voc� est� ainda enxugando as l�grimas. O povo de g�meos tagarela muito. E n�o consegue guardar segredos. Se quiser prejudicar algu�m, solte um veneno para o geminiano e ele vai espalh�-lo, como se fosse a imprensa marrom. E o signo que melhor representa a TPM. O Geminiano � inteligente porque absorve tudo muito r�pido , tipo um Sempre Livre, mas odeia se aprofundar nas coisas�  Tipo modess sim, vibrador n�o. Dizem que g�meos e falso. N�o �. Apenas muda r�pido de ideia. Corretores de im�veis se irritam com este signo. O Homem geminiano tem sempre muito o que fazer, muitos amigos, muitas atividades e pode ate ter duas namoradas, porque esqueceu se de terminar com a outra. Mas n�o tenha pena, mate-o do mesmo jeito.","LADO NEGRO DE G�MEOS",MB_OK);
                     goto denovo1;
                     break;
                 case 7:
                      MessageBox(0, "\n1 - As quest�es do sexo e da mente s�o muito relacionadas para os geminianos. Comprometer � mente � um tiro certo para conquist�-los. G�meos adora a excita��o mental j� que, caso contr�rio, se aborrece com facilidade. Para seduzir um amante geminiano � preciso introduzir-lhe em novas formas de pensar e de ser. \n2 - Os amantes dos geminianos t�m que ser flex�veis. A personalidade dual de G�meos e sua paix�o pelas coisas novas significa uma tend�ncia a mudar e, por conseguinte, ele se apaixonar� pela capacidade que seu companheiro tenha de seguir-lhe.\n3 - Os amantes dos geminianos tamb�m devem ser inventivos. Devem estar ao dia e encontrar novas formas de fazer as coisas usuais. Experimente com t�cnicas manuais e orais. Esteja aberto a novas posi��es e varia��es das cl�ssicas. Seu amante geminiano gostar� de provar qualquer coisa nova, pelo menos uma vez.\n4 - Trabalhe com os sentidos. Uma boa apar�ncia e um bom perfume s�o imprescind�veis para que G�meos possa desfrutar de uma experi�ncia sensorial completa. N�o deixe nenhuma parte de seu corpo sem tocar. Utilize novos tecidos, tatos suaves nas roupas e na pele. N�o se limite � hora de provar com sabores, lo��es, alimentos e, inclusive, roupa interior comest�vel para excitar suas papilas gustativas. E n�o esque�a do atrativo sexual que possuem os sons. Diga a seu amante geminiano o que voc� gosta.\n5 - A variedade � o sal da vida, e uma das claves mais importantes para comprazer aos amantes geminianos. A rotina � uma forma segura de matar seu impulso sexual. Por �ltimo, n�o fa�a nada que os deixe inc�modos.","G�MEOS: AMOR E SEXO ",MB_OK);
                      goto denovo1;
                      break;
                 default:
                         MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR);goto denovo1;
                 
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
                      MessageBox(0, "\n\tUse o poder das cores neste in�cio de semana, que alegrem sua alma e aumentem seu pique. Lua e J�piter aumentam sua f� e confian�a na vida e ainda trazem bons presentes e provas de afeto. Relacionamentos prosperam. Noticias de longe. Viagem a vista!","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\tA raiz e a origem\nC�ncer � o quarto signo do Zod�aco, representando a for�a que cria a vida, a raiz que sustenta todo o nosso desenvolvimento posterior na exist�ncia. Por isso, � o signo relacionado com a m�e, a fecundidade e a Terra, que nos d� o sustento e nos acolhe. Tem a natureza conservadora e feminina, pois s� assim permite a prote��o e o cuidado com o embri�o. C�ncer � um signo de movimento, chamado cardinal, pois marca a mudan�a de esta��o do ano, como os outros tr�s signos cardinais �ries, Libra e Capric�rnio. Receptivo e nutridor, C�ncer simboliza o ventre e o �tero que abriga a semente, criando condi��es para que ela se fortale�a e mais tarde se transforme em um organismo mais complexo. O mist�rio de uma semente que permanece quieta e crescendo sob a terra, (mas que guarda uma promessa de futuro para o amanh�) est� contido no simbolismo de C�ncer, que consegue visualizar o que ainda n�o aconteceu. Essa vis�o do invis�vel, esse poder de imaginar e a reten��o da mem�ria caracterizam este signo de sensibilidade, impression�vel e inst�vel nas emo��es como as fases da Lua, o astro que preside C�ncer. Amor �s tradi��es, mem�ria do passado e intui��o poderosa, voltada para a sobreviv�ncia, s�o tra�os caracter�sticos de C�ncer, o signo que representa a unidade familiar. O animalzinho relacionado ao signo � o caranguejo, cujo casco duro esconde a natureza sens�vel sob uma apar�ncia muitas vezes �spera. � um dos signos mudos do Zod�aco, ou seja, sente mas ret�m o que sabe, s� expressando quando tem a certeza de que ser� bem aceito ou que n�o corre riscos.\n","PERFIL DE C�NCER",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Frio e Umido(Agua)- baixa energia e capacidade de juntar e conectar.\n\n\t\t> NATUREZA: passivo, feminino, noturno, par.\n\n\t\t> POLARIDADE: negativa\n\n\t\t> REGENTE: Lua\n\n\t\t> CORES: cinza, perola, branco, tonalidades leitosas\n\n\t\t> CORPO: seios e estomago> PALAVRAS - CHAVE: Ontem e Amanha, Sentimento, Familiaridade, Sobrevivencia, Receptividade, Sonho, Nutricao.\n\n\t\t> SIGNOS COMPATIVEIS: Escorpiao, Touro, Peixes e Aquario\n\n\t\t> VERBO : Sentir ","FICHA T�CNICA DE C�NCER",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                     MessageBox(0, "\n\tSe o seu objetivo � fazer feliz algu�m que tenha o signo solar em C�ncer, voc� precisar� estar atento ao que est� fazendo com que ele perca o humor. Regido pela Lua, este � o signo inst�vel, que sem mais nem menos, pelo menos aparentemente, muda de express�o facial, se recolhe l� com seus bot�es e se torna impenetr�vel - e muitas vezes intrat�vel. Imerso nas mar�s emocionais, C�ncer pode nem perceber o que est� se passando fora de sua intimidade, e come�a a evitar programas e a dormir mais e mais. Isso � sinal de uma melancolia que se aproxima quando ele n�o sabe muito bem o que deseja para ser feliz, ou quando a vida se torna �spera l� fora. Portanto, para presentear algu�m de C�ncer, voc� precisa ter acesso a essa �rea rec�ndita em que ele se esconde do mundo, tal qual o caranguejo que � o s�mbolo desse signo. Por meias palavras, voltas e volteios, voc� consegue chegar l�, mas ser� preciso ser insistente! Uma vez descoberto o tema que aflige o nativo de C�ncer, voc� tem algumas op��es. Qualquer presente que o ajude a tornar sua vida privada mais ensolarada � bem vindo. At� mesmo um animalzinho de estima��o, no qual ele possa empregar todos os seus talentos maternais. Mas, se o caso n�o � para tanto, sonde o grau de conforto que ele tem no seu quarto de dormir. Len��is e mantas, de origem ex�tica; objetos de toucador, mesinhas e outros objetos de uso pessoal s�o boa pedida, e voc� acertar� em cheio se escolher algo belo e antigo, pois C�ncer adora antiguidades. Como � um tanto impaciente e n�o gosta de esperar muito para ver o resultado do que faz, voc� deve evitar os presentes que exigem constru��o mental demorada ou v�rias etapas para serem completados, como modelagem de carros, por exemplo, ou quebra-cabe�as de montanhas de pe�as. O lado feminino de C�ncer � muito acentuado e isso � um problema para os homens da nossa cultura, que ir�o desenvolver esse dote na cozinha, uma das artes em que mais se destacam. Portanto, voc� tamb�m acerta se escolher um presente que estimule a sua imagina��o nas artes gastron�micas. Quase todo C�ncer gosta de colecionar objetos e se voc� conhece a posi��o da Lua natal desse personagem, ficar� mais f�cil descobrir o que lhe agrada mais. Se ele possui a Lua de nascimento em signos de Terra (Touro, Virgem e Capric�rnio) opte por objetos macios, agrad�veis ao toque e de longa durabilidade. Se a Lua estiver em signos de Ar (G�meos, Libra e Aqu�rio) d� prefer�ncia ao que se movimenta e tem sons harmoniosos, como m�biles ou campainhas de Feng Shui; no caso de uma Lua em signo de �gua (C�ncer, Escorpi�o e Peixes) escolha CDs de m�sica antiga ou de relaxamento; quando a Lua est� em signos de Fogo (�ries, Le�o e Sagit�rio) a pedida s�o as velas, lumin�rias e objetos brilhantes de lat�o, cobre, prata ou ouro. Quanto �s cores, prefira tudo o que tem a apar�ncia da madrep�rola, onde o branco leitoso se confunde com o furta-cor suave das tonalidades azuis, rosas e verdes. No que se refere aos odores, C�ncer tem rela��o com o que � adocicado e quente.","DICAS ESPECIAIS PARA PRESENTEAR C�NCER",MB_OK);    printf ("*_____________________________________________________________________________*\n");
                     goto denovo1;
                     break;
                 case 5:
                      MessageBox(0, "\n\tImpression�veis, sens�veis e imaginativos, os cancerianos se satisfazem com uma profiss�o que lhes d� oportunidade de sonhar, de criar, e de resgatar conhecimentos, historias e mem�rias de sua coletividade, destacando-se tamb�m em profiss�es ligadas a preserva��o da vida privada e ps�quica, ao fornecimento de produtos consumidos em casa, ou para ela. Gastronomia, historia, psicologia, ensino de crian�as pequenas, cuidado com gr�vidas, terceira idade, mas tamb�m arquitetura, decora��o etc. Precisam de ambiente tranq�ilo e rotinas fluidas.","PROFISS�ES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                      MessageBox(0, "\n\tVamos chorar? C�ncer � chor�o. C�ncer se magoa com facilidade. C�ncer � manipulador. C�ncer sempre tem dinheiro escondido. C�ncer � um signo da �gua, regido pela lua e � um signo feminino. Ligado � familia, a valores tradicionais e ao romantismo. Resumindo: Uma caretice s�. C�ncer fica magoado com qualquer bobagem e fica remoendo esta bobagem e um dia, do nada, no meio de uma feijoada com amigos solta o verbo:\n - Aquele dia voce n�o me ofereceu pastel. \nVoc� � egoista, n�o pensa nos outros. \nE voc� fica ali pasmado, tentando entender aquilo. C�ncer e o mestre em soltar aquela frase:\n - Depois de tudo o que eu fiz por voc� A forca da manipula��o.. C�ncer adora acumular, guardar, colecionar. Sempre tem um dinheiro guardado, um dinheiro que ningu�m sabe que ele tem. E C�ncer � p�o duro. O lado B do canceriano e quase um 'lado c'. Adoram bordeis, saunas e estes lugares modernos tipo � frequentados por casais. Adoram ficar em casa e se poss�vel, teriam a balada delivery, de tanto que gostam de ficar em casa de moleton, arrastando os chinelos. E tamb�m aquela pessoa insuport�vel que demora meia hora no banho e quando sai�d� lhe vapor.","LADO NEGRO DE C�NCER",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - C�ncer gosta de tomar a iniciativa no romance. Por tanto, h� que se deixar cortejar, deixar que este signo despregue toda sua magia interior. � preciso ser paciente. Em assuntos de amor, os cancerianos s�o bastante met�dicos. Um amante canceriano deve sentir-se seguro de sua rela��o.\n2 - � preciso ser flex�vel. Os cancerianos tendem a refugiar-se com freq��ncia em sua carapa�a de caranguejo. H� que dar-lhes espa�o quando necess�rio. Normalmente, depois de ter interiorizado seus pensamentos, eles regressam rejuvenescidos e com for�a.\n3 - Mostrar-lhes afeto costuma dar resultados muito positivos. Os pertencentes deste signo gostam de sentirem-se amados. Isto tem sua tradu��o pr�tica. Transmitir-lhes de forma t�ctil o afeto e o amor acender� sua paix�o e os converter� em amantes muito especiais.\n4 - O compromisso � outro dos fatores que ajuda � realiza��o sexual dos cancerianos. Este signo adora o amante afetuoso e fi�vel. C�ncer tem um sentido de prote��o por natureza. Desfruta dedicando-se � constru��o de uma confort�vel casa e compartilhando-a com um amante fiel.","C�NCER: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
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
                      MessageBox(0, "\n\tVoc� tem percebido o valor do conhecimento bem estruturado, das informa��es corretas, que em muito ajudam a manter sua reputa��o acima de oscila��es ocasionais. Nesta semana, pesquise a fundo um tema relativo a seu trabalho. Amigos por perto.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\tO fogo da paix�o\nO quinto signo do Zod�aco simboliza o poder irradiante do amor que se inflama por algo ou algu�m e passa ent�o a ter o poder de purificar e iluminar. Como todo signo fixo, Le�o det�m o poder da estabiliza��o do que foi engendrado em C�ncer, o signo anterior. Semelhante aos outros signos masculinos, Le�o tende a agir, mais do que se submeter �s condi��es externas. Le�o � regido pelo Sol, s�mbolo da intui��o espiritual e da cria��o. De elemento Fogo, o signo se caracteriza pela intui��o como instrumento dominante para lidar com o mundo. Le�o simboliza o fogo dentro do homem que o transforma em guerreiro, mais interessado em lutar por uma causa ou cren�a do que apenas observar o que acontece. Nesse sentido, Le�o � um signo de compromisso, pois o Fogo a tudo penetra e transforma. Le�o simboliza o rei - inclusive dos animais, o pr�prio le�o, que � o animal que representa este signo. A vitalidade sempre presente, a vontade do eu sobrepujando a vontade do grupo - da� a imagem do guerreiro, do her�i, que se consome em uma causa, d� o exemplo de sua pr�pria vida - pois quer educar os outros, mostrando como � poss�vel persistir em um caminho, subjugando todo o resto em nome de uma inspira��o vital. Criativo e ambicioso, o Le�o tem a for�a suficiente para mostrar todo o poder de sua individualidade. Ao mesmo tempo, � greg�rio e preza demais a fam�lia, a qual quer proteger a todo custo. Por ser um centro irradiador de coragem e f�, facilmente se torna o centro das aten��es. Possui o magnetismo animal que encanta a todos. O Le�o � o signo do cora��o generoso, que busca agir com honradez mas que pode ser bastante desp�tico e autorit�rio quando contrariado. Suas paix�es ardentes possuem mais estabilidade do que se imagina, pois Le�o preza o romantismo mas tamb�m busca a const�ncia sentimental. Signo de artistas que procuram o brilho que sai do centro de seu cora��o, Le�o adora tamb�m ajudar as pessoas a descobrirem seu pr�prio brilho interior, tornando-se por isso, excelentes professores.\n","PERFIL DE LE�O",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e Seco (Fogo) - alta energia e capacidade de separar e cortar\n\n\t\t> NATUREZA: ativo, masculino, diurno, �mpar\n\n\t\t> POLARIDADE: positiva\n\n\t\t> REGENTE: Sol\n\n\t\t> CORES: amarelo-avermelhado, dourado, amarelo\n\n\t\t> CORPO: vis�o, olhos e cora��o\n\n\t\t> PALAVRAS - CHAVE: Generosidade, Forca, Vitalidade, Simpatia, Criatividade, Dominio, Determinacao\n\n\t\t> SIGNOS COMPATIVEIS: Aries, Sagitario, Gemeos e Libra.\n\n\t\t> VERBO : Ser ","FICHA T�CNICA DE LE�O",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tPresentear um nativo de Le�o exige sensibilidade e delicadeza. Certifique-se de que seu presente ir� torn�-lo feliz. Algo que Le�o detesta � falta de considera��o por seus interesses e jeito de ser. Esse � um signo intuitivo, n�o adianta fingir que quer agrada-lo, por que ele perceber�. Mais vale algo simples, mas dado de cora��o, do que um objeto que n�o lhe diga respeito - isso ele tomar� por desamor. Le�o adora ser aplaudido - mas apenas pelo o que realmente sabe fazer ou se esfor�ou para fazer bem. Fa�a uma sondagem a respeito de seus gostos nos esportes, na m�sica e nas artes pl�sticas. Le�o tem uma sensibilidade especial para apreciar os verdadeiros talentos. Seja qual for o presente, ter� de ser �nico, original, de valor. Este � um signo que adora brilho e tudo que � dourado, se sente em casa no meio das pessoas amigas que quer bem. Seu bom gosto pode pecar pelo excesso gastron�mico ou no vestu�rio, por vezes. Mas ele ir� se sentir feliz se voc� providenciar uma festa surpresa, com gente que o admira e gosta. Tudo regado a boa comida e bom vinho - em doses generosas para este signo de cora��o grande. Le�o tamb�m gosta de se apresentar muito bem e brilhar no meio de todos. Por isso, vestu�rio, j�ias e perfumes, sapatos e capas, casacos e botas podem fazer sua alegria.Se sua escolha recair sobre vestu�rio ou objetos de uso pessoal, escolha sempre a melhor grife. De prefer�ncia algo bem raro e distinto, ele se sentir� especial como gosta de ser. Como s�o educadores natos, embora impacientes, sonde seus talentos de ensino - ele poder� adorar ganhar algo relacionado. O importante � voc� presentear o Le�o com algo que expresse sua admira��o por este esp�cime raro que sabe ensinar a todos o amor que consome e transforma tudo que toca.","DICAS ESPECIAIS PARA PRESENTEAR LE�O",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                    MessageBox(0, "\n\tIntuitivos, criativos e sentimentais, os leoninos se sentem a vontade em um ambiente em que possam liderar, trazendo id�ias que executam em equipes, sempre liderando-as. Profiss�es bem criativas em que possam dar vaz�o a seus sentimentos, como as ligadas as artes - teatro, por exemplo - s�o grande fonte de realiza��o pessoal. S�o bons executivos, em cargos de chefia, administra��o, em qualquer �rea que se sintam atra�dos.","PROFISS�ES",MB_OK);
                    goto denovo1;
                    break;
                 case 6:
                      MessageBox(0, "\n\tLe�o � o lider, o rei , o brilho , mas inseguro, precisa de adornos e mimos, sen�o, sua auto estima � como a de uma ameba na quaresma. Quer levantar um leonino? Elogie-o, finja que a opiniao dele � a suprema, e que sem ele, sua vida seria uma vida vulgar e miser�vel, t�pica de personagem secund�rio de novela do SBT. Quer derrub�-lo? Ignore-o, ria das suas roupas e modos exagerados, n�o aceite suas verdades prontas e voc� ver� este felino louco, chorando pelas selvas da vida. � ciumento, dram�tico e cheio de barracos..  As leoninas s�o bravas, gastadeiras e querem aten��o o tempo todo. Manhosas, adoram criar um criar um conflito s� para no final, ganhar no debate.","LADO NEGRO DE LE�O",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                    MessageBox(0, "\n1 - Com Le�o temos que come�ar proclamando nossa adora��o por ele, e desta forma teremos dado um grande passo. Quem sabe um doce susurro ao p� do ouvido seja suficiente para despertar o le�o que ele leva dentro de si.\n2 -  Com Le�o � preciso trabalhar bem as preliminares. Elas devem ser como um culto ao r�gio signo do poder, algo de que ele desfrutar� cada minuto. Quem sabe a melhor recomenda��o sobre a rela��o com um leonino seja: leve o tempo que for preciso para acender o fogo em Le�o, e tenha certeza de que eles far�o com que o sexo seja inesquec�vel.\n3 - � importante ter claro que Le�o � impulsionado pelo prazer. � como se o sexo lhe proporcionasse a oportunidade de possuir um territ�rio desconhecido. Os leoninos n�o se aborrecem facilmente em suas rela��es, mas desfrutam mais com a emo��o de novas experi�ncias.\n4 - No sexo, Le�o gosta de ser servido, e de que seu parceiro corresponda em suas atividades preferidas. Se fizer isto, os leoninos subir�o �s nuvens com toda certeza.\n5 - Em rela��o a este tema, Le�o exige reciprocidade. Inclusive, se voc� der mais, receber� mais. Por outro lado, tamb�m conv�m ter cuidado para n�o ferir o orgulho de Le�o neste assunto.","LE�O: AMOR E SEXO",MB_OK);
                    goto denovo1;
                    break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
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
                      MessageBox(0, "\n\tMerc�rio e Plut�o em confronto: cuidado com as palavras! De tarde a Lua alcan�a o signo oposto ao seu, vibrando por um relacionamento mais intenso e entregue com seu amor. Se voc� n�o tiver um, sorria mais e abra-se de verdade.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tA busca da perfei��o\n\tO signo de Virgem se relaciona com o aprimoramento pessoal e de tudo o que faz. Aperfei�oar � o que interessa, e para fazer isso, o meio mais f�cil � dissecar tudo, analisando cada parte do todo e criando categorias. Da� a rela��o de Virgem com as ci�ncias normativas, como a zoologia, a bot�nica, por exemplo. O trabalho cotidiano tamb�m significa Virgem, aquele momento em que se aplica o que se aprendeu e se esfor�a para fazer ainda melhor. Em Virgem, somos todos aprendizes. Insatisfeito, inst�vel, Virgem procura fazer com perfei��o at� os menores detalhes do que realiza. � um signo de elemento terra: sensorial, voltado para a sensualidade, mas tamb�m bastante mental, em um sentido pr�tico e colado � realidade da vida di�ria, em que � preciso ter hor�rios para que se possa cumprir com tudo o que foi planejado. O organizador do Zod�aco que cataloga at� emo��es pode ser o melhor ajudante do idealizador, aquele eu ir� arranjar os meios para que um projeto realmente se constitua em algo real. Para isso, Virgem estabelece as rela��es com o meio em que est�. � um signo de c�lculo das probabilidades -com o risco o calculismo e do utilitarismo que podem aparecer quando dissonante. O trabalhador aplicado e fiel ao que planejou anteriormente chega a se exceder - o que torna mais vulner�vel o seu j� sens�vel sistema digestivo e nervoso. As m�os tamborilam sobre a mesa, em um gesto de insatisfa��o ou pressa, quando diante dos muito sonhadores. S�o m�os de quem sabe criar as engenhocas mais incr�veis e tamb�m de fazer os afagos mais precisos no corpo do ser amado. Esse � o tra�o do elemento terra que se sobrep�e a todos os outros. T�o ligado pode ser na realidade externa, que se esquece de dar o devido valor aos seus sentimentos e emo��es, este mundo impreciso e desorganizado, ca�tico e perigoso que muitas vezes faz com que o sempre controlado Virgem perca a cabe�a e fa�a grandes loucuras. Nesse momento, sua percep��o, normalmente alerta e capaz de apreender os menores sinais, se perde e se volta inteiramente para seu mundo interno, em um esfor�o desesperado de controlar-se. Virgem d� muito valor � mente e � racionalidade e evita mostrar o que sente pelas pessoas - acha que � melhor continuar se controlando e tentando melhorar os outros, com seus coment�rios e apartes sensatos e cr�ticos, nem sempre bem recebidos. Engenhoso, disciplinado, parcimonioso, Virgem se adapta �s condi��es, encontra meios para realizar sua tarefa - nos campos de sua prefer�ncia: planejamento, cataloga��o, medicina, veterin�ria, por exemplo. A perfei��o deve existir tamb�m no aspecto f�sico - Virgem � o signo eu rege a dieta purificadora, a alimenta��o natural, perseguida com af� intenso e at� uma certa intoler�ncia para quem leva a vida em esquemas mais desorganizados.\n","PERFIL DE VIRGEM",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Frio e Seco (Terra) - baixa energia e capacidade para separar e delimitar\n\n\t\t> NATUREZA: passivo, feminino, noturno, par\n\n\t\t> POLARIDADE: negativo\n\n\t\t> REGENTE: Mercurio\n\n\t\t> CORES: laranja, azul raiado com tons alaranjados\n\n\t\t> CORPO: intestino delgado\n\n\t\t> PALAVRAS - CHAVE: Critica, Observacao, Catalogacao, Purificacao, Aprimoramento, Perfeicao, Praticidade, Humildade\n\n\t\t> SIGNOS COMPATIVEIS: Capricornio, Touro, Cancer e Escorpiao.\n\n\t\t> VERBO : Analisar","FICHA T�CNICA DE VIRGEM",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tO signo mais cr�tico e exigente do Zod�aco n�o faz quest�o de brilho nem inova��es, muito menos de demonstra��es dram�ticas. Virgem deseja algo pr�tico, bem feito, de utiliza��o cotidiana, que se adapte �s suas necessidades de aperfei�oamento pessoal - no campo f�sico e mental. Um beonito r�dio-rel�gio, nesse sentido, � ideal! Nervoso e inst�vel, amante da economia, voc� pode fazer a sua alegria se presente�-lo com produtos para banho, de �tima proced�ncia - um para cada fun��o. Ou tamb�m pode acertar bastante se escolher objetos que possa montar; modelos em miniatura, por exemplo. Quanto mais intrincado, melhor. Instru��es precisas, utilidade clara fazem sua paix�o: conjuntos de instrumentos mec�nicos, objetos de mesa para escrit�rio - tudo muito s�brio e de apar�ncia agrad�vel - tamb�m s�o op��es interessantes. Apetrechos para dias chuvosos tamb�m podem atraentes. Virgem gosta de se informar sobre o mundo, adora cole��es e biografias, livros sobre dietas, medicina alternativa, gastronomia, p�es e sucos naturais, t�cnicas de auto-ajuda que possa praticar para relaxar. Se mais moderno, voc� pode at� arriscar panelas, microondas e massageadores caseiros. Ou at� um curso de massagem! Como � signo de elemento Terra, Virgem precisa estar sempre em contato com a natureza para repor suas for�as; uma boa op��o � uma pequena viagem para perto de um local onde Virgem possa se descontrair, dar risada e fazer suas pequenas loucuras a s�s. Quanto �s cores, d� prefer�ncia aos tons da terra mis suaves, mas tamb�m ao alaranjado, com matizes rajados, as estampas listradas de duas cores (s�brias), os compostos double-face. Entre os perfumes, os de tonalidade fresca, com toques de mato e levemente adocicados. Na m�sica, nada muito complexo nem contempor�neo, a n�o ser que seja um Virgem aficionado � m�sica experimental.","DICAS ESPECIAIS PARA PRESENTEAR VIRGEM",MB_OK);                     goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tRacionais e meticulosos, se realizam em �reas medicas, cientificas e naquelas ligadas ao relacionamento no trabalho, como recursos humanos, cargos e empregos, produ��o, pois sabem operacionalizar id�ias em conjuntos pr�ticos que facilitam a vida da coletividade. Quando m�dicos, se destacam pela per�cia no diagnostico, s�o excelentes detetives tamb�m na �rea cientifica e tecnol�gica, rastreiam as condi��es e oferecem sa�das e solu��es exeq��veis. Se destacam nas profiss�es que exigem habilidade mental e manual, como fotografia. Rotinas flex�veis, precisam se sentir estimulados intelectualmente","PROFISS�ES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                      MessageBox(0, "\n\tVoc� � metido a perfeccionista, observador e detalhista. Gosta de analisar e gerenciar tudo. Essa sua maldita mania faz de voc� um burocrata insuport�vel. Voc� � um bitolado e n�o tem nenhuma imagina��o ou criatividade. Gosta mesmo � de tomar conta da vida dos outros. Critica os outros, 'mete o pau', mas n�o enxerga o pr�prio rabo. Quando as pessoas dos outros signos do zod�aco preenchem aquele maldito formul�rio de 15 vias carbonadas, de cinco cores diferentes, que devem ser batidos � m�quina, elas n�o tem d�vida. S� pode ser um virginiano que fez.","LADO NEGRO DE VIRGEM",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                     MessageBox(0, "\n1 - Para levar-lhes ao sexo, os detalhes contam muito. Os virginianos s�o rom�nticos por natureza. Com pequenos gestos � poss�vel chegar � sua alma, algo que pode se manifestar atrav�s de rosas e da luz de velas. Fa�a o 'virgem' se sentir especial.  \n2 - Comunique-se. Ainda que o virginiano tenda a manter um verdadeiro n�vel de reserva, � preciso se esfor�ar em ter abertas as linhas de comunica��o e conseguir um sentimento de amante feliz.\n3 - Virgem est� entre os signos que requer um in�cio lento. Os jogos preliminares s�o essenciais tanto para os homens como para as mulheres pertencentes a este signo. Ser� a chave que deixar� sair seu fogo interior. Fale muito, olhe freq�entemente nos olhos, beije, acaricie...\n4 - Ser espont�neo � outra das coisas que os virginianos apreciam, eles gostam que lhes iluminem em mat�ria de sexo. N�o o tire de sua zona confort�vel, deixe-lhe sentir-se protegido e calmo no mundo em que se sente a vontade, n�o lhe provoque sustos ou mal-interpreta��es desnecess�rias. Com Virgem, utilize m�todos refinados e educados. ","VIRGEM: AMOR E SEXO",MB_OK);
                     goto denovo1;
                     break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
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
                      MessageBox(0, "\n\tManh� �tima pra explorar seus dons, estar� com mais pique e aberto pra trocar ideias com todos. Desacertos nos planos do cotidiano merecem um pouco de paci�ncia, n�o vale desistir! A noite, sa�de mais sens�vel - vigie a rotina e os alimentos.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tRela��es p�blicas do Zod�aco\nDiplomata, jovial, simp�tico, Libra pensa que o mundo deve ser um local harmonioso e agrad�vel. Na astrologia, � o primeiro dos signos acima do horizonte, que inaugura a rela��o da pessoa com o mundo externo. Ir ao encontro de seus pares, aprender a conviver com quem � diferente, eis o lema da Libra, signo que marca tamb�m o in�cio da primavera no hemisf�rio sul. Libra � um dos quatro signos cardinais que sinalizam in�cio das esta��es, quando elas mudam, da� seu car�ter apressado e �gil, que adora a vida urbana trepidante - pelo menos durante a primeira metade da vida -, com bastante movimento porque foge da mesmice e do t�dio, que o entristece. Voltado para a associa��o e � coopera��o, contando com um faro incr�vel que lhe permite encontrar o m�nimo divisor comum entre os pontos de vista mais divergentes, Libra tem tamb�m uma grande preocupa��o com a comunidade, e � capaz de batalhar pela justi�a, sendo um �timo �rbitro. T�o preocupado est� em acertar uma avalia��o correta, um julgamento adequado, que naturalmente acaba hesitando entre muitas op��es de vida. Mas � o ritmo, importante para criar harmonia e equil�brio, que � seu territ�rio real. Isso torna Libra um mestre das artes de conviv�ncia, mas tamb�m um artista, que pode desenvolver em algum momento da vida, seus dotes criativos na m�sica e nas artes pl�sticas buscando sempre o refinamento est�tico, a sutileza e a imagem de seu tempo. Algumas vezes, al�m da hesita��o, Libra termina convivendo com pessoas e grupos sociais que nem sempre prova, pois para ele � muito importante conhecer muita gente - adora o glamour da fama - e ser bem relacionado. Libra sabe desde que nasceu que nenhum homem � uma ilha - e leva essa cren�a at� as �ltimas conseq��ncias. Quando contrariado ou frustrado, sua tend�ncia � refletir, pensar muito, muitas vezes �s custas de suas emo��es - que ficam guardadas e podem se transformar em problemas renais ou na coluna vertebral. Libra tem horror de destemperos emocionais, � um signo de racionalidade que n�o entende muito bem as subjetividades e tende a privilegiar A Rela��o mais at� do que os participantes da mesma. Em nome disso, acaba aceitando o que n�o tem de aceitar, e depois se arrepende. Principalmente no amor, Libra precisa de compatibilidade mental e semelhan�a de valores para ser feliz. Ele procura acima de tudo justi�a e equil�brio nas rela��es. Sens�vel �s apar�ncias, pode se enganar com um belo rosto e boas maneiras, um comportamento cosmopolita e um certo verniz cultural, que acende a sua imagina��o para os bons momentos que poder�o ser vividos em grupo.\n","PERFIL DE LIBRA",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e �mido (Ar) - alta energia e capacidade de juntar e conectar\n\n\t\t> NATUREZA: ativo, masculino, diurno, impar\n\n\t\t> POLARIDADE:     positiva\n\n\t\t> REGENTE: Venus\n\n\t\t> CORES: azul -esverdeado, azul-pavao, verde-mar\n\n\t\t> CORPO: rins e a bacia \n\n\t\t> PALAVRAS - CHAVE: Sociabilidade, Justi�a, Razao, Arte, Comunicacao, Relacionamento, Refinamento, Equilibrio\n\n\t\t> SIGNOS COMPATIVEIS:   Aquario, Leao, Gemeos e Sagitario.\n\n\t\t> VERBO : Amar ","FICHA T�CNICA DE LIBRA",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tLibra adora a vida em sociedade e o requinte, as boas maneiras, faz quest�o de estar presente nos programas culturais e sociais - e tem muito jeito para a produ��o desses mesmos eventos. Assim, o melhor presente � aquele que ele possa usar no mundo l� fora, ou o que o ajude a se relacionar melhor com todo mundo. Libra tamb�m gosta de se informar - a cultura, a pol�tica e a arte s�o temas em que voc� pode apostar se pretende presentear com livros - bem bonitos, com design refinado e belas ilustra��es ou reprodu��es. As artes em geral tamb�m s�o boas pedidas: esculturas, pinturas, mas que estejam na moda, porque Libra n�o gosta de nada ultrapassado. Apesar de prezar muito a hist�ria, seu cora��o bate mais forte com tudo o que est� no topo da linha. Cuidado aqui: se voc� acha que ele tem predile��o por best-sellers, n�o � bem isso. Apesar de ser um signo que luta pela igualdade de oportunidades, jamais ir� a uma festa sabendo que est� usando a mesma roupa que os amigos. Algo precisa ser diferente - mais avan�ado, mais original, �nico de algum ponto de vista. V�nus, o planeta do amor, rege este signo - um passeio a dois para curtir a intimidade rom�ntica e a troca de id�ias tamb�m � uma �tima op��o. Nas cores, a suavidade deve imperar, as composi��es em tons frios, nada que agrida o sentido est�tico apurado deste signo. Em mat�ria de perfumes, todos aqueles que t�m um toque floral, leve e algumas notas secas.","DICAS ESPECIAIS PARA PRESENTEAR LIBRA",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tO tipo rela��es publicas do zod�aco se dar� bem em qualquer profiss�o em que tenha de estabelecer acordos entre as partes: direito, pol�tica. Atividades que incluam forte dose de sensibilidade art�stica, como decora��o, arquitetura tamb�m s�o indicadas. S�o artistas por natureza e com isso sabem ser excelentes moderadores, agilizam equipes, mas n�o gostam de comandar nem executar trabalhos em solid�o. Quanto a rotina, que seja variada, em que possam ser razoavelmente independentes e tenham contato com gente.","PROFISS�ES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                      MessageBox(0, "\n\tVoc� se acha equilibrado, idealista e justo. Parece sentir a necessidade de proteger os outros e lutar contra as injusti�as. Na verdade, voc� s� pensa em si mesmo. Voc� � um engomadinho metido. Gosta de coisas sofisticadas e de alto n�vel, mas n�o passa de um ignorante desinformado. Nas conversas, quer falar sobre coisas intelectuais, como literatura e arte, e dificilmente entra em assuntos pol�micos. Quer ser politicamente correto. Na realidade voc� � um grande 'fazedor de m�dia'. Isso esconde sua verdadeira cara. Dessa forma, os outros signos nunca saber�o seu real interesse, que � f... os outros. Afinal, voc� � um teimoso, ignorante e ambicioso. Libra tamb�m tem uma mania chata de seduzir Deus e o mundo e depois n�o sabe o que fazer com a v�tima , ent�o � muito comum que tenha muitos relacionamentos ao mesmo tempo , at� que uma das v�timas perde a paci�ncia e lhe mete a m�o na cara(geralmente uma ariana ou leonina ensandecidas). E Fica horas, numa mesma quest�o:\n 'Mas se formos ao motel,n�o acordaremos cedo para comer o pastel da feira�.'\n 'Mas se acordarmos cedo para comer o pastel , n�o iremos ao motel, e acho que precisamos transar�.'\n 'Mas tamb�m se formos a feira, n�o sei se � legal, porque voc� est� de regime'�\n 'Mas tamb�m no motel tem tv, ent�o poder�amos ver o Supercine'�.\n Mas tamb�m�\n E segue a chatice que d� nos nervos. E quando libra se decide, afe, d�lhe romantismo melado. No meio do sexo, o libriano quer parar e olhar nos seus olhos e inventa de acariciar seu corpo com uma rosa ..No meio de um jogo de baralho ele quer que voc� pare, porque a lua t� linda. No final da novela, ele resolve dizer que te ama. Coragem!!! ","LADO NEGRO DE LIBRA",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - O primeiro passo � cativar a mente de Libra. Libra � um signo de ar, � intelectual e se estimula com a conversa. Est�o orientados ao relacionamento por natureza, e s�o absolutamente rom�nticos. Quanto mais forte seja o tipo de rela��o, melhor ser� o sexo.\n2 - No jogo da sedu��o e do amor os librianos precisam sentir-se desej�veis e desfrutar ao serem cortejados. Portanto, n�o tenha medo de tomar a iniciativa e ser quem faz o primeiro movimento. Mas antes assegure-se de que sabe o muito que o deseja.\n3 - No jogo do amor h� que saber levar-lhes � paix�o. Jogue. Olhe o libriano nos olhos e o beije profundamente. Lembre-se, em todo momento, que o corpo humano � maravilhoso e lhe responder�.\n4 - Os librianos adoram as novas experi�ncias quando se trata de sexo. Se encantam por os que podem ser um pouco mais fortes que eles. Tenha em mente que qualquer pessoa que possa ajudar Libra a converter-se num melhor amante ter� prioridade em sua lista pessoal.\n5 - Relaxe e desfrute do que um amante libriando possa lhe oferecer. Os pertencentes a este signo t�m uma profunda necessidade de comprazer. Isto tamb�m acontece em suas vidas sexuais. Os librianos est�o muito predispostos a satisfazer seus amantes.","LIBRA: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
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
                      MessageBox(0, "\n\tMarte se despede nesta semana de Touro, mas at� que isso aconte�a � melhor voc� ter paci�ncia com seus parceiros, s�cios e clientes! De muitos modos estar� nas m�os deles. Amor devotado e zelo por familiares, filhos e crian�as em destaque.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tA transforma��o radical\n\tSigno da intensidade, da profundidade e da luta pela sobreviv�ncia, Escorpi�o � o investigador do zod�aco. Nada lhe passa desapercebido, e onde temos este signo, ali mergulhamos fundo em um processo intenso de mudan�a e transforma��o, mesmo que seja ao custo de podar muita coisa - e s� ficar com o essencial. Grande administrador nato, dono de um olhar de lince, teimoso e determinado, Escorpi�o � um guerreiro que procura o jeito mais certeiro de chegar at� seus objetivos - e �s vezes se torna cruel e manipulador para alcan��-los. Ningu�m jamais � o mesmo depois que cruza o caminho do Escorpi�o, cuja fun��o no mundo � transformar, nem que seja cutucando... Escorpi�o busca um prop�sito al�m do vis�vel, nem que seja pelo alto pre�o. Descontente, atormentado, o elemento �gua aqui se conecta com todas as linguagens invis�veis aos menos atentos: grande ledor de almas, de posturas corporais, Escorpi�o � o cirurgi�o que tem o instinto voltado para erradicar o anacr�nico, o apodrecido e o in�til. E faz isso em qualquer campo em que esteja: na vida familiar, sentimental, profissional... N�o � preciso esconder nada dele, pois a mera inten��o de fazer isso j� � sentida corporalmente pelo Escorpi�o. Reagindo com seu instinto a todo tipo de amea�a a seus planos ou objetivos, o Escorpi�o avan�a, muitas vezes em silencio, controlando suas express�es e sonhos, para mais tarde descansar. Desconfiado - conhece todos os males que afligem a alma humana - torna-se amargo, um pouco melanc�lico quando percebe at� onde pode ir a fraude, a hipocrisia e a dispers�o, que detesta. � um signo magn�tico, de for�a animal, ligado em sexo, dinheiro e poder - os tr�s grandes temas que movimentam a humanidade desde sempre. Chega a ser autorit�rio nesse seu esporte preferido de alcan�ar o poder, mas jamais mesquinho. No amor, � apaixonado, se entrega de corpo e alma, segue at� o inferno com o ser amado, � possessivo, leal e cr�tico de si mesmo e do outro. A fidelidade � algo que ele conquista aos poucos - e a trai��o jamais � esquecida. A tradi��o astrol�gica sempre diz que o pior inimigo que se pode ter � um Escorpi�o, pois ele aguarda anos a fio at� dar o bote e aniquilar quem traiu a sua confian�a. Por estas qualidades - e defeitos - Escorpi�o � amado ou detestado, temido e tolerado, porque se faz imprescind�vel, e obriga seus rivais a 'engolirem' sua presen�a, mesmo quando n�o desejam, por que sabe administrar crises como ningu�m. E acaba por ser respeitado, enfim. Detetive por natureza, soma a isso uma extrema sagacidade, que o faz descobrir talentos ocultos em quase todo mundo, mas que se torna um pouco assustadora e pesada quando est� triste, ferido ou desanimado. A procria��o e seus filhotes s�o algo sagrado para signo, que se maravilha com seus filhos a ponto de parecer ing�nuo - mas � capaz de destruir qualquer amea�a a eles, nem que seja ele mesmo.\n","PERFIL DE ESCORPI�O",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Frio e Umido (Ar) - energia baixa e grande capacidade de juntar e conectar\n\n\t\t> NATUREZA: passivo, feminino, noturno, par\n\n\t\t> POLARIDADE: negativo\n\n\t\t\n\n\t\t> REGENTE: Marte, tradicionalmente, Plutao modernamente\n\n\t\t> CORES: vermelho-sangue, vermelho-arroxeado, roxo e negro\n\n\t\t> CORPO: sistema excretor e reprodutivo\n\n\t\t> PALAVRAS - CHAVE: Auto-controle, Determinacao, Paixao, Sexo, Poder, Regeneracao, Transformacao, Posse, Ci�me, Magnetismo\n\n\t\t> SIGNOS COMPATIVEIS:   Cancer e Peixes. \n\n\t\t> VERBO : Controlar","FICHA T�CNICA DE ESCORPI�O",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tEscorpi�o n�o est� a� para brincadeiras, nem perda de tempo - a n�o ser o tempo que ele mesmo escolhe para se dedicar aos seus passatempos, mas quando isso acontece ele foge do mundo. � dif�cil conhecer profundamente um Escorpi�o, a n�o ser que voc� tamb�m seja um ou que conviva com ele h� muito. Voc� acerta no presente se sabe exatamente qual � o tipo de coisa que provoca sua paix�o - nem mais, nem menos do que isso. Escorpi�o costuma ser um trator no trabalho e geralmente adora o que faz - sen�o, n�o faria. Uma boa pedida � presentear com algo relacionado � sua profiss�o e seu trabalho. Algo que ele possa manter por muito e muito tempo, porque ele n�o gosta muito do que � ef�mero - a n�o ser das flores naturais, ex�ticas, raras, que quando murcharem ele guardar� em um livro por anos a fio. Escorpi�o n�o gosta de esbanjar dinheiro, se sente incomodado com isso - portanto demonstra��es de status e riqueza n�o o abalam. Ele � sens�vel �s inten��es verdadeiras, ent�o n�o se incomode se n�o tiver como lhe dar um objeto caro; � mais importante que voc� lembre da data que est� sendo comemorada, nem que seja com uma flor colhida no canteiro de uma rua qualquer. Em mat�ria de perfumes, os quentes e secos, com leves notas adocicadas, os orientais e os extratos. Na m�sica - que ele adora dan�ar - os ritmos primitivos, as can��es m�sticas de antigamente, os tambores �rabes e os solos melanc�licos de jazz dos anos 40. Escorpi�o se reanima com o amor e a paix�o, se puder arranje um local distante, impenetr�vel onde possa passar alguns dias mergulhado na descoberta do outro, sem interrup��es.","DICAS ESPECIAIS PARA PRESENTEAR ESCORPI�O",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                      MessageBox(0, "\n\tInvestigativos, ponderados e realizadores, se sentem realizados em profiss�es em que possam aplicar seu sexto sentido, como a psicologia, a psiquiatria, a cirurgia, a arqueologia. Por serem bons analistas, se d�o bem na economia, e por saberem desvendar e administrar os recursos alheios, na administra��o financeira. Precisam de rotina fluida, s�o bons lideres, um tanto r�gidos, mas d�o exemplo de seu esfor�o. Precisam sentir a confian�a e a lealdade de seus chefes.","PROFISS�ES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                      MessageBox(0, "\n\tVoc� � o pior de todos. Voc� � desconfiado, vingativo, obsessivo, rancoroso, vagabundo, frio, cruel, anti�tico, sem car�ter, traidor, orgulhoso, pessimista, racista, ego�sta, materialista, falso, malicioso, mentiroso, invejoso, c�nico, ignorante, fofoqueiro e trai�oeiro. Voc� � um canalha completo. S� ama sua m�e e a si mesmo. Ali�s, alguns de voc�s n�o amam nem a m�e. Voc� � imprest�vel e deveria ter vergonha de ter nascido. Escorpianos s�o tiranos por natureza. S�o �timos nazistas ou fascistas. Adora pisar os outros e tem um orgasmo quando v� algu�m no buraco. Pelo bem dos outros signos do zod�aco, os escorpianos deveriam ser todos exterminados.","LADO NEGRO DE ESCORPI�O",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - As preliminares s�o importantes. Neste caso, a estrat�gia exige certa entrega - ou ao menos deixar que Escorpi�o pense isso e ache que tem tudo sob controle. Os pertencentes a este signo gostam de ter o papel de sedutores. Seja valente e audaz e Escorpi�o lhe ver� como digno de ser conquistado. Eles gostam de desafios. Tamb�m lhe agrada o intelecto e as pessoas que vivem a vida intensamente. Isto despertar� o fogo e a paix�o deste signo.\n2 - D�-lhe um toque picante. Quando se trata de sexo, Escorpi�o quer fazer tudo o que seja humanamente poss�vel para sobressair-se. O sexo � todo um c�mulo de prazer e de possibilidades para os pertencentes a este signo. A rotina lhes aborrecer� e lhes levar� �s lagrimas. Mantenha a excita��o num amante escorpiano e ele ser� uma m�quina sexual.\n3 - A conduta sexual de Escorpi�o � indom�vel, e voc� deve estar � altura. Voc� tem que ser capaz de manter o n�vel. Se n�o compartilhar a adora��o de Escorpi�o nos frequentes encontros passionais, lhe provocar� tristeza e ele perder� o interesse como amante.\n4 - � preciso ter cuidado com os escorpianos e n�o brincar com sua paix�o. Eles podem ser letais e vingativos. ","ESCORPI�O: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM ESCORPIAO

void sagitario()
{
     int opcao;    denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|    ______ ______ ______ ___ ______ ___�__ ______  ___ ______                |\n");
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
                      MessageBox(0, "\n\tSob um clima astral rico de promessas, voc� inicia a semana de bem com seus colegas, disposto a colaborar e integrar seu trabalho com o de outras pessoas. Causas em comum ter�o um apelo especial. Sonhos reveladores. Amor, s� se for bem s�rio.","Previs�o pra 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\t� procura de um sentido\n\tSagit�rio � o nono signo do Zod�aco, soci�vel, explorat�rio e interessado em captar alvos que estimulem o movimento no mundo externo. Como � tamb�m um signo de qualidade mut�vel, sua fun��o � disseminar e adaptar as mudan�as com versatilidade e compreens�o pelas diferen�as existentes nos v�rios grupos humanos. Para adaptar as verdades relativas, ele busca outras paisagens, pois necessita descobrir o que � comum e verdadeiro para muitos agrupamentos e n�o apenas a alguns. � um signo que produz pessoas com grande potencial para filosofia, justi�a e antropologia. Por ser um divulgador e explorador nato, o Sagit�rio tem como s�mbolo a flecha que procura um sentido que ser� divulgado, ampliando assim a percep��o alheia, resgatando princ�pios universais e superando a vis�o tacanha da vida. � movido pela inspira��o e pela intui��o. Por isso, dizemos que Sagit�rio coloca sua inspira��o a servi�o de grandes causas sociais, em busca de um sentido que fa�a as pessoas reunirem-se e expandirem sua vida. O Sagit�rio tem o esp�rito de um ge�grafo, que descobre novas paisagens - naturais ou imateriais - integrando-as para a melhoria da sociedade. Entre as profiss�es, encontramos, portanto, muitos adeptos das aventuras e descobertas, das explora��es, e tamb�m muitos publicit�rios, editores. Sagit�rio ensina o que sabe - mesmo que nem sempre cumpra em sua pr�pria vida os ensinamentos que espalha em suas andan�as pelo mundo. Sagit�rio � representado pela figura de um centauro, o que aponta para a qualidade humana e animal que tem dentro de si, em perp�tua contradi��o, que afinal de contas � o que o move na vida. Ao ceder aos desejos que animam seu jeito de viver, entusiasta e positivo, pode se exceder. D� livre curso a suas vontades, beirando o excesso, pois quer experimentar e explorar o que for poss�vel desta vida. Inst�vel, prefere a mudan�a, a variedade - o que complica as rela��es mais duradouras. Seu lado animal pende para a satisfa��o imediata e positiva dos desejos sensuais, enquanto seu lado humano procura entender essas contradi��es, podendo encontrar um sentido mais amplo e superar as pr�prias limita��es e desejos descompassados atrav�s de uma pr�tica espiritual que o leve � modera��o. Contudo, o Sagit�rio convive e cria em meio a esta dial�tica que � representada pelo centauro-chefe, Qu�ron, o mestre-fil�sofo que tentava curar tamb�m as dores alheias tratando de sua ferida incur�vel. Sagit�rio ir� testar o sentido de vida de qualquer um que cruzar seu caminho. Mas ir� agir com generosidade e alegria, compreendendo a natureza humana como ningu�m, dono de uma grande capacidade de perdoar - a si e aos outros - que beira a temeridade! Para este signo que luta pelos fracos e oprimidos, a justi�a precisa ser cumprida - atrav�s da lei, porque n�o � de acometer contra o 'status quo', preferindo o caminho da conven��o ao da revolu��o. Gosta de fazer justi�a com seu exemplo e seu julgamento e � adepto das competi��es esportivas como forma de educar a juventude, sendo ele pr�prio muitas vezes um entusiasta e praticante de esportes greg�rios, onde o mais importante � competir respeitando as regras do jogo, do que se sobressair como um her�i. Seu planeta regente � J�piter, o maior planeta do sistema solar, representando por este simbolismo natural sua grandeza, seu natural dom para ampliar e fazer crescer o que toca. �s vezes, prefere ocultar suas d�vidas aos olhos dos outros, curtindo seu desanimo com a mesquinharia humana em retiro. Por ser um signo que rege o sentido amplo da vida, e a busca por isso acarreta em alguns momentos a melancolia - o sentido escapa e chega a depress�o. O f�gado, relacionado ao sentido da vida, � regido por J�piter, sendo o �rg�o de Sagit�rio, assim como as coxas e o f�mur. A natureza restaura seu organismo forte, �s vezes pressionado pelos excessos de uma vida agitada ou desregrada. Mas Sagit�rio tem f� para dar e vender e acredita que existe uma luz no final do t�nel.\n","PERFIL DE SAGIT�RIO",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e Seco (Fogo) - alta energia e capacidade para separar e delimitar\n\n\t\t> NATUREZA: ativo, masculino, diurno, �mpar\n\n\t\t> POLARIDADE: positivo\n\n\t\t> REGENTE:     Jupiter\n\n\t\t> CORES: azul-real, azul-arroxeado, verde-azulado, escarlate, carmim\n\n\t\t> CORPO: figado, femur, coxas\n\n\t\t> PALAVRAS - CHAVE: Exploracao, Fe, Divulgacao, Versatilidade, Sociabilidade, Otimismo, Espiritualidade, Aventura, Julgamento e Misericordia\n\n\t\t> SIGNOS COMPATIVEIS:   Aries, Leao, Libra e Aquario.> VERBO : Ver","FICHA T�CNICA DE SAGIT�RIO",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tSagit�rio gosta de aventuras e novidades que n�o agridam seu gosto um tanto convencional (salvo outras configura��es planet�rias existentes). Sabe apreciar a natureza, mas tamb�m se move com desenvoltura nos ambientes refinados e da moda. Isso facilita bastante na hora de presentear! Apetrechos de viagem s�o �timas pedidas - de livros de viajantes a guias de bolso, passando por dicion�rios tril�ngues (Sagit�rio � o signo que exibe maior dom para o aprendizado de l�nguas), at� cal�ados especiais, barracas ultimo tipo, canivetes super equipados, etc. Outro foco preferencial pode ser o esporte. Se souber qual � sua especialidade preferida, apele para isso - na d�vida, roupas de fibras especiais para a pr�tica esportiva s�o a solu��o. No campo dos objetos de desejo existem tamb�m as col�nias amadeiradas, com forte tom seco e agreste, as camisas esportes das boas griffes, e sapatos - fortes e belos para suas caminhadas, quando o sentido da vida est� sendo amea�ado. Sagit�rio adora comer, beber e namorar, dan�ar e curtir longas conversas sobre os mundos intang�veis, ou contar seus planos de reforma social para a educa��o popular. A� as op��es s�o abundantes. Um livro de receitas ex�ticas (para ele mesmo experimentar fazer em casa), um whisky brindado com o selo da casa real brit�nica, um CD de m�sica �tnica ou world music de boa qualidade e bem feito, um final de semana perto do mato e da cachoeira - s�o escolhas que far�o o cora��o exuberante do Sagit�rio bater acelerado e agradecido. Em mat�ria de cores e texturas, � melhor n�o arriscar muito. Sagit�rio sabe entender e apreciar as diferen�as culturais, � um lutador pelo direito das minorias, mas dificilmente desfilaria por a� com turbantes berberes, por exemplo. (Ele deixar� os turbantes em local de destaque em sua casa, junto a outros tantos objetos pin�ados pelo mundo afora). D� prefer�ncia a roupas de corte reto, simples e confort�vel, confeccionadas em tecidos de textura agrad�vel, em tons s�brios e escuros, nas cores azul, cru ou branca.","DICAS ESPECIAIS PARA PRESENTEAR SAGIT�RIO",MB_OK);
                      goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tInspirados, precisam agir por conta pr�pria, como os seus colegas de signo de elemento fogo, �ries e Le�o, os sagitarianos sabem antever o futuro, s�o desbravadores, se realizam no direito, no turismo, na geografia, nas rela��es internacionais, no comercio exterior, nas profiss�es que os obriguem a desbravar territ�rios desconhecidos. Fil�sofos por natureza, se d�o bem no ensino acad�mico, na filosofia do direito, nas publica��es e nas artes da linguagem, por sua tremenda persuas�o. Bons vendedores, s�o chefes natos. N�o gostam de rotina r�gida.","PROFISS�ES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                      MessageBox(0, "\n\tVoc� � um otimista e tem uma forte tend�ncia em confiar na sorte. Isso � bom para voc�, j� que � imprudente, irrespons�vel, limitado e n�o possui nenhum talento. Como n�o tem compet�ncia, sempre arruma uma forma de se desculpar de suas burradas na vida. E sempre p�e a culpa nos outros. Mas na verdade voc� que � incompetente mesmo. Voc� � um teimoso, ambicioso e metidinho. Na verdade, voc� � um idiota fracassado. Al�m do mais, seu conceito de �tica e moral � limitado. Voc� � um puxa-saco, galinha e gosta mesmo � de sacanagem. Quando consegue alguma coisa na vida � sempre de forma obscura","LADO NEGRO DE SAGIT�RIO",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                     MessageBox(0, "\n1 - O sexo atrav�s do talento. Os sagitarianos n�o podem nem imaginar um relacionamento com algu�m que seja menos capaz do que eles. Para Sagit�rio, o sexo � uma extens�o natural da busca por algu�m que lhe preeencha por completo. Um amante sagitariano trata de encontrar respostas no prazer.\n2 - Comunique-se honesta e sinceramente com eles. Os pertencentes a este signo n�o t�m nenhum problema em expressar desejos, necessidades e opini�es. Com Sagit�rio � preciso ser franco, e eles agradecer�o.\n3 - Os sagitarianos valorizam a liberdade e a independ�ncia acima de todas as coisas. Este signo estar� disposto a renunciar qualquer rela��o que se converta num �nus. � preciso dar espa�o para o amante sagitariano. Se o fizer, ele corresponder� com aten��o e paix�o.\n4 - Para Sagit�rio h� que encontrar uma mistura entre dist�ncia e proximidade. � preciso ter confian�a em si mesmo para se relacionar neste terreno com eles. Se fizer desta forma, geralmente os amantes sagitarianos n�o resistir�o e ter�o o sexo como algo pr�ximo e importante em sua mente.\n5 - Sagit�rio gosta das coisas novas. Aproveite sua capacidade para aprender, experimentar e converter-se num h�bil amante. � preciso estar pronto para qualquer coisa. ","SAGIT�RIO: AMOR E SEXO",MB_OK);
                     goto denovo1;
                     break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM SAGITARIO

void capricornio()
{
     int opcao;    denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|        _____ _____ ______ _____  __ _____ __�__ _____  _   _ __ _____       |\n");
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
                      MessageBox(0, "\n\tV�nus faz com que voc�, de bom grado, aceite incumb�ncias e trabalho a mais pra fornecer uma base mais segura ou agrad�vel ao seu entorno - este � o tema destes dias. Sua mente capta tudo ao redor. Nem � preciso falar demais. Inspira��o.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tTestemunha do passado e construtor do presente\n\tCapric�rnio inaugura a esta��o do ver�o no hemisf�rio sul. Signo Cardinal, governa o tempo e os grandes projetos. D�cimo signo do zod�aco, o Capric�rnio simboliza a disciplina a servi�o do projeto que sirva o bem coletivo, devotado �s rela��es humanas. Capric�rnio deseja realizar obras para a posteridade, coloca sua organiza��o a servi�o da sociedade, exercendo grande controle sobre as paix�es e sentimentos pessoais. Parece mais paciente e frio do que na realidade �. Signo de obriga��es, deveres, costuma esconder o lado sensual e arcaico. A cabra-peixe, animal fabuloso, � seu s�mbolo, que tem liga��o com as �guas do sentimento ancestral. Isto �, por tr�s da tenacidade de um cabrito, que cava a terra buscando alimento em terreno �rido e resiste �s situa��es mais �rduas, existe um animal que anseia pela divaga��o, perda de limites. Capric�rnio parece tranq�ilo, mas � movido por paix�es e desejos como qualquer um. � na arte que Capric�rnio mostra esse lado, assim como no humor. Sensual, pois � signo de elemento terra, sua tarefa � melhorar as estruturas existentes. Capric�rnio resiste �s frustra��es, se submete �s condi��es in�spitas para realizar um plano ambicioso de longo prazo e deseja ter o reconhecimento social de seus m�ritos. Seu jeito leal e determinado, seu temperamento confi�vel, s�rio e respons�vel, mostra seguran�a no que faz. Observador, Capric�rnio despreza a bajula��o e o servilismo e n�o cede ao seu orgulho ferido. Capric�rnio rege os joelhos, mostrando sua analogia com a obedi�ncia a uma lei maior, ainda que invis�vel, que move profundamente o signo. Os ossos e a coluna vertebral - estrutura do corpo humano - est� sob governo de Capric�rnio, pois � ele que cria e mant�m a estrutura que sustenta outras, assim como a coluna nos mant�m na posi��o vertical. Signo dos que governam, dos que projetam a administra��o p�blica, donos de um sangue-frio pr�prio dos estrategistas pol�ticos, o Capric�rnio est� sempre no alto de uma montanha alt�ssima, de onde olha o mundo e sua feira de vaidades, que no fundo despreza. Seu temperamento retirado e solit�rio se d� bem nas profiss�es de pesquisa hist�rica e arqueol�gica, bem como em todas as disciplinas que lidam com o tempo e a administra��o pol�tica, j� que s�o engenheiros do tempo. Em qualquer campo, Capric�rnio tende a se destacar por seu n�vel de excel�ncia em sua �rea, mesmo pagando o pre�o da diminui��o do lazer.\n","PERFIL DE CAPRIC�RNIO",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                     MessageBox(0, "\n\t\t> QUALIDADE: Frio e Seco (Terra) - baixa energia e capacidade para separar e delimitar\n\n\t\t> NATUREZA: passivo, feminino, noturno, par\n\n\t\t> POLARIDADE: negativo\n\n\t\t> REGENTE:  Saturno\n\n\t\t> CORES: marrom e negro\n\n\t\t> CORPO: Coluna, Dentes, Cartilagens, Ossatura, Ouvido Esquerdo, Pele\n\n\t\t> PALAVRAS - CHAVE: Disciplina, Organiza��o, Determina��o, Estrategia, Dever, Concentracao, Tempo, Eternidade, Independencia, Realismo, Maestria\n\n\t\t> SIGNOS COMPATIVEIS:   Touro, Virgem, Escorpiao e Peixes.\n\n\t\t> VERBO : Poder ","FICHA T�CNICA DE CAPRIC�RNIO",MB_OK);                 
                     goto denovo1;
                     break;
                 case 4:
                     MessageBox(0, "\n\nCapric�rnio gosta de independ�ncia, de permanecer um pouco � parte do burburinho, preza sua reputa��o e imagem p�blica e prefere algo de muito valor e apar�ncia simples do que algo espalhafatoso, brilhante ou barulhento demais. A classe, a tradi��o, a discri��o atraem esse signo de poucos amigos, mas leais. Seu gosto � especial - sabe apreciar as linhas simples, retas, cl�ssicas, os metais preciosos e os n�o t�o preciosos assim, mas que s�o dur�veis. Durabilidade e tradi��o s�o palavras-chaves para abrir o cora��o de um Capric�rnio. J�ias antigas, livros raros, m�veis de madeira de corte simples, reto e para uso pr�tico podem agradar. Capric�rnio gosta da natureza - de prefer�ncia a selvagem, para agradar seus sentidos, mas adora o conforto que a vida moderna proporciona. Col�nias e extratos secos para os homens, um pouco doces para as mulheres caem bem. Bolsas, sapatos e meias fazem a alegria deste signo - mas prefira os materiais consagrados, nada de novidades sazonais. Na m�sica, a prefer�ncia deve ir para as obras tamb�m antigas, a world music e a m�sica tocada com instrumentos antigos. De modo geral, o melhor do melhor � para ele: o melhor do jazz, o melhor da MPB. Em mat�ria de cores e texturas,o marinho, preto e cinza-escuro, alternado com o branco s�o os destaques. D� prefer�ncia a roupas simples, de uso social e profissional, em tons escuros. Em resumo, para presentear bem um Capric�rnio, escolha o melhor esp�cime da categoria, com o nome mais consagrado, no tom mais s�brio poss�vel. Capric�rnio � um cl�ssico at� no rock�n�roll - ele identifica e despreza em dois tempos a c�pia mal feita de um acorde de Jimi Hendrix, ou a voz que imita a rouca e atormentada irm� de signo Janis Joplin...","DICAS ESPECIAIS PARA PRESENTEAR CAPRIC�RNIO",MB_OK);
                     goto denovo1;
                     break;
                 case 5:
                      MessageBox(0, "\n\nRealizadores por natureza, gostam de ser aplaudidos por seus m�ritos conquistados por muito esfor�o, trabalham duro e s�o muito ambiciosos. Uma vez decidida sua voca��o, seguir�o firmes em sua dire��o. De prefer�ncia, na administra��o publica, na pol�tica, na historia, pois respeitam o que foi testado no passado. S�o excelentes chefes, um tanto r�gidos, mas sabem trabalhar ao lado de seus subalternos, ganhando sua confian�a. Constroem um imp�rio na �rea escolhida e jogam com o tempo. S�o independentes e precisam de rotina bem delimitada.","PROFISS�ES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                      MessageBox(0, "\n\nVoc� � metido a s�rio, conservador e politicamente correto. Na verdade voc� � um materialista, falso, ambicioso e safado. Voc� tem uma tend�ncia de ser enrustido em tudo. Voc� � frio, n�o tem emo��es e freq�entemente dorme enquanto est� transando. Voc� gosta de manter as apar�ncias e quando encontra um 'amigo', abra�a, deseja tudo de bom... Mas na primeira oportunidade puxa o tapete dele e depois vai dormir de consci�ncia tranquila. Voc� nunca joga limpo e sua frieza faz de voc� um sanguin�rio completo. Mas que importa? Se a grana est� entrando... �timo!","LADO NEGRO DE CAPRIC�RNIO",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - � importante propor atividades juntos para que a conquista seja efetiva. Lembre-se que voc� deve preparar-se fisicamente para ser atraente para os capricornianos, e fazer tudo o que esteja a seu alcance para impressionar sua fam�lia e seus amigos.\n2 - De cara ao sexo, conv�m ser muito transparente com os capricornianos, j� que este signo � de natureza c�tica e n�o se atreve a confiar nos demais. Quanto mais aberto voc� seja com eles, mais c�modos eles se sentir�o como amantes.\n3 - Tamb�m conv�m ser lento e paciente com eles. Const�ncia e lentid�o s�o dois bons ingredientes para sacar de Capric�rnio o melhor o que eles podem oferecer. Recorde que os pertencentes a este signo mostram uma grande resist�ncia � mudan�a. Isto, somado a sua desconfian�a, faz com que em quest�es de sexo se avance lentamente. Para ajudar-lhes a revelar o verdadeiro amante que guardam dentro de si h� que atuar com finura e paci�ncia.\n4 - A perseveran�a � uma palavra chave para tratar deste tema com Capric�rnio. Ainda que possa parecer imposs�vel romper sua coura�a exterior, ser� vi�vel, se perseverar com eles. Com esfor�o, um amante capricorniano ser� um apaixonado parceiro sexual.\n5 - Com este signo � poss�vel desfrutar com seguran�a. Uma vez que voc� tenha atrapado um capricorniano, seu amor j� n�o ir� a nenhum lugar. E, hoje em dia, o sexo seguro � o melhor sexo.","CAPRIC�RNIO: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
    }    //fim switch
} // FIM CAPRICORNIO

void aquario()
{
     int opcao;    denovo1:
     system("cls");
    printf ("*_____________________________________________________________________________*\n");
    printf ("|         ______ ______  __  __  ___�__ _____  ___  ______                    |\n");
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
                      MessageBox(0, "\n\tLua em seu signo at� fim da tarde pede que inicie a semana devagar, cuidando mais de si mesmo. Volte-se para sua vida privada, ir� restauras suas for�as e acertar os ponteiros consigo. Apesar disso, sente demais todos a sua volta. Cuide-se.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\tAntena do futuro que irradia a mudan�a\n\tEste � o �ltimo signo fixo da seq��ncia zodiacal, e sua fun��o � distribuir, de forma racional, o que foi criado pela for�a realizadora do Capric�rnio. Como signo fixo que �, sua fun��o � estabilizar e enraizar o que foi iniciado em Capric�rnio, um signo de grandes in�cios. Para isso, inventar� os meios necess�rios, valendo-se da produ��o em s�rie, da moda e de ideologias reformadoras. Seu racioc�nio agudo e penetrante faz com que se torne presen�a indispens�vel onde a vida precisa acontecer com ousadia. Aqu�rio capta tudo com extrema rapidez, antevendo o que ainda n�o foi criado. Para inventar, � cioso de sua mente, aberta ao novo. Racional, mental, age pensando na coletividade, mais do que em contatos pessoais. Impessoal, preserva sua liberdade a todo custo, fugindo de compromissos estreitos demais ou que ele sinta invadir sua privacidade. Oposto ao signo de Le�o, Aqu�rio aspira o poder compartilhado, permanece um solit�rio que antev� o futuro, desvendando inc�gnitas e preocupando-se com o que vir�. Aberto �s inova��es, nem sempre Aqu�rio � f�cil de mudar de ponto-de-vista. Iconoclasta, afeito a destruir '�dolos de p�s de barro', Aqu�rio pode arremeter com teimosia e frieza contra quem espera controla-lo. Aqu�rio inventor tem como mito principal Prometeu, o semideus que roubou o fogo dos deuses para ofert�-lo aos seres humanos, inaugurando assim a era da civiliza��o. Inclinado a incorporar as novidades tecnol�gicas que libertem o ser humano da pris�o das estruturas, amante da humanidade, volta-se ao futuro das rela��es humanas, deseja experimentar novas formas de relacionamento. Muitas vezes, �s custas de sua emo��o e da intimidade emocional que poderia criar com outras pessoas. No amor, Aqu�rio precisa de espa�o vital maior do que os outros signos do Zod�aco. Ama e concebe a vida com a cabe�a, inspirando-se em id�ias que troca com o ambiente. Err�tico, imprevis�vel, distancia-se emocionalmente parta se proteger, mas preserva a atitude pac�fica, a n�o ser quando francamente provocado por algu�m poderoso e autorit�rio. Sua natureza racional tende a crer no que pode compreender tudo pelo lado mental e busca raz�es at� para suas emo��es. Informal, trata todo mundo da mesma maneira e assim pretende ser tratado. Com seu poderoso manejo da raz�o, ir� convencer a todos de suas cren�as - mas n�o aceita bem as controv�rsias, pois, no escuro de sua sombra est� Le�o, o mais autorit�rio e 'mand�o' de todos os signos do Zod�aco. Quando cerceado em sua liberdade, pode se tornar err�tico e autorit�rio. Aqu�rio precisa aprender muito com o relacionamento humano, inclusive a respeitar as emo��es alheias sem trat�-las como algo primitivo ou atrasado. No sexo, s� se animam de verdade quando percebem ter identidade intelectual com o parceiro. Capazes de grande fidelidade e devotamento detestam ver sua vida privada alvo de bisbilhotice ou fofoca. Aventuras rom�nticas, surpresas e novidades deve fazer parte de sua agenda afetiva se pretende manter uma rela��o est�vel por muito tempo. Na sa�de, Aqu�rio rege o sistema nervoso perif�rico e os tornozelos. Um estilo de vida muito agitado e estressante retira e esvazia a vitalidade do Aqu�rio, um signo de sa�de delicada e sens�vel.\n","PERFIL DE AQUARIO",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE: Quente e �mido (Ar)-alta energia e grande capacidade para juntar e conectar\n\n\t\t> NATUREZA: ativo, masculino, diurno, impar\n\n\t\t> POLARIDADE: positivo\n\n\t\t> REGENTE:  Saturno (tradicional) e Urano (moderno)> CORES: azul escuro, indigo e negro\n\n\t\t> CORPO: tornozelos, sistema nervoso, sistema circulat�rio perif�rico> PALAVRAS - CHAVE:   Futuro, Visao, Liberdade, Ousadia, Romance, Solidao, Experiencia, Racionalidade, Coletividade, Serializacao\n\n\t\t> SIGNOS COMPATIVEIS:   Aries, Gemeos, Libra e Cancer.\n\n\t\t> VERBO : Saber","FICHA T�CNICA DE AQU�RIO",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tAqu�rio gosta de tudo o que o signo anterior foge: brilho, ousadia, surpresa, novidade. Originalidade, modernidade ou alta antiguidade, simplicidade e despojamento aceleram seu cora��o. Aqu�rio tem alma de historiador e adora objetos antigos, bem antigos. � um filho de Saturno e como tal preza o passado arcaico da humanidade. Mais afeito ao ar livre e aos grandes espa�os, se sente bem no meio das pessoas - mesmo que n�o as conhe�a, o que facilita presentes culturais tais como entradas para a primeira sess�o de um filme premiado ou sess�es no Planet�rio de sua cidade. Leitor voraz, Aqu�rio apreciar� as teorias revolucion�rias, os grandes romances que iniciaram estilos, escolas e modas. Quanto aos perfumes, � melhor escolher as col�nias secas e leves. As cores s�o o azul, �ndigo, negro e as tonalidades iridescentes, prateadas, com texturas agrad�veis ao toque. Na m�sica, assim como nas artes em geral, preste aten��o ao seu gosto - que vai do contempor�neo ao arcaico. Possuidor de um agudo olho cl�nico para pescar novidades que contagiam a coletividade, Aqu�rio descobre o conjunto de funk ou rap que ser� o sucesso da pr�xima temporada, assim como encontra verdadeiras rel�quias em sebos de bairro. E, se voc� n�o nasceu com o Sol em Aqu�rio, n�o tente competir com ele - aposte no que tem certeza de que ele ir� gostar.","DICAS ESPECIAIS PARA PRESENTEAR AQU�RIO",MB_OK);    printf ("*_____________________________________________________________________________*\n");
                      goto denovo1;
                      break;
                 case 5:
                      MessageBox(0, "\n\tInovadores, pac�ficos, teimosos, se realizam nas �reas cient�ficas tecnol�gicas, na aeron�utica, navegacao, aviacao, mas tamb�m nas telecomunica��es, na internet, jornalismo etc. Sao criativos, preferem trabalhar por conta propria, sem rotinas rigidas, e sua formacao intelectual e fator de sucesso financeiro. Podem viajar para outros paises, e se darem bem la fora em algum estudo especifico. Como sao um tanto excentricos, podem correr contra as correntes dominantes nas artes e nas ciencias, mas sempre mostram resultados com o tempo.","PROFISS�ES",MB_OK);
                      goto denovo1;
                      break;
                 case 6:
                     MessageBox(0, "\n\tVoc� provavelmente n�o � desse planeta. Tem uma mente inventiva e dirigida para o progresso. Voc� mente e comete os mesmos erros repetidamente porque � imbecil e teimoso. Voc� adora ser o 'do contra'. Pensa que tem opini�o formada sobre tudo. Na verdade, voc� � ego�sta e gosta mesmo � de aparecer. Mesmo que esteja entre um milh�o de pessoas, voc� quer ser o diferente. Voc� nunca segue os padr�es. Isso faz de voc� um metido nojento. Voc� se acha o moderninho. Acha que est� � frente dos outros signos do zod�aco. Voc� n�o tem nenhuma moral. Se voc� for homem deve ser um galinha e, se for mulher, aposto que nem perguntou o nome do �ltimo cara com quem dormiu!","LADO NEGRO DE AQU�RIO",MB_OK);
                     goto denovo1;
                     break;
                 case 7:
                      MessageBox(0, "\n1 - Para flertar, um aquariano tem a favor seu encanto natural, e tamb�m desfruta mostrando suas habilidades. Este signo ama o sexo e irradia energia sexual. \n2 - Para esta quest�o � importante compartilhar intelecto com os pertencentes deste signo. Ter id�ias em comum � um primeiro passo. Poderiamos dizer que se o aquariano for introduzido por seu amante em sua vis�o do mundo, os benef�cios ser�o abundantes dentro e fora do quarto.\n3 - Os aquarianos precisam que lhes ofere�am seguran�a. A intimidade n�o � o ponto forte deste signo. Os pertencentes deste signo costumam sentir-se vulner�veis e pouco confort�veis. Se seus pretendentes conseguirem que eles se sintam seguros, compartilhar�o com eles seus segredos mais profundos.\n4 - Os aquarianos precisam de um espa�o pr�prio. Um pouco de dist�ncia permitir� manter sua vida sexual viva, e a rela��o com s�o seu amante ser� ainda mais intensa.\n5 - Seja criativo. O signo de Aqu�rio � um pouco hedonista. O sexo � como um parque de divers�es para eles. Encanta-lhes a novidade e a efici�ncia. Quanto mais formas voc� encontrar para chegar a obt�-lo/a como amante, melhor resposta obter� dele como tal.","AQU�RIO: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
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
                      MessageBox(0, "\n\tMerc�rio e Plut�o trazem lutas por poder ao cen�rio, escolha quando e como vai comunicar suas decis�es aos mais pr�ximos. N�o d� pra controlar todos os dados ao mesmo tempo, desista. Fa�a a sua parte. No amor, decis�es de longo prazo em vista.","Previs�o para 20/06/2011",MB_OK); goto denovo1;
                      break;
                 case 2:
                      MessageBox(0, "\n\t\t'Navegar � preciso'\n\tUm ciclo se encerra - algo se extingue ao mesmo tempo em que se pressente o nascimento de algo novo. O navio que singra os mares vastos � s�mbolo tamb�m desse signo, o �ltimo da s�rie do zod�aco. � preciso partir, embora n�o se possa enxergar com clareza o rumo a ser seguido. N�o faz mal: os Peixes sempre sabem para onde se deve navegar. � este o signo que escuta os rumores do infinito, que segue o pressentimento, chegando humilde no porto -e sem fazer alarde, d� exemplo de grande miseric�rdia. Nesse navio, sempre cabe mais um, porque todos podem ser salvos, ali�s, todos ser�o salvos. O tema da salva��o e da perdi��o, a figura do santo e do louco, ambos fazem parte do simbolismo de Peixes, que est� sempre na fronteira de dois mundos. Aqui, se aprende que tudo termina no mar - o oceano recebe todas as �guas, todos os detritos da civiliza��o tamb�m. Sem julgar, ele recebe o que j� �til, tragando em suas �guas as mem�rias de centenas de hist�rias extintas. Para cumprir essa tarefa de extrema compaix�o por todas as formas de vida, Peixes � male�vel, vers�til. � um signo mut�vel, realmente. Segue com os ventos, que empurram as velas do navio. Isso Talvez seja esse o mist�rio que Peixes evoca por onde passa. Mas ele n�o fala, apenas acolhe, mistura todas as pessoas na festa e ela vira um sucesso. Antenado no infinito ele sabe presentear como ningu�m - com seu ar distra�do, pisando as estrelas, vai captando o que � impalp�vel, o que n�o se exibe com clareza - e depois, surge com o presente que fala direto ao cora��o de algu�m. Mas exatamente por esta capacidade, peixes carrega, vez por outra, os detritos da humanidade, na forma de sentimentos e emo��es alheias que v�o se juntando ao seu sentimento. Por vezes, a carga deste mundo � t�o pesada que ele entende o que Cristo (cujo s�mbolo era um peixes, ali�s), queria dizer quando falava 'meu reino n�o � deste mundo'. O reino de Peixes � o da arte, da m�sica, da poesia, dos espa�os siderais tamb�m. Viajante eterno, andarilho dos caminhos santos, pescador de almas perdidas, parece ter uma conex�o direta com o reino imaterial, com as impress�es e imagens. Da� usa a sua maravilhosa imagina��o e seu enorme poder de sentir os espa�os. Em Peixes, tudo � grande, vasto, infinito. Tanto que, no reino animal o signo rege as baleias e os grandes seres do oceano, assim como os elefantes, que caminham sobre a terra. No desespero, Peixes se perde, j� n�o sabe mais o caminho - desconhece quem �, se desintegra nas mil dores da humanidade e de toda a cria��o. Alma sens�vel, sabedoria inata, n�o quer convencer ningu�m, talvez porque entenda tudo. No fundo, perdoa a todos - e se n�o fizer um esfor�o para discriminar muito bem o que vive, acaba se fazendo mal. Peixes tende ao escapismo, pois como este n�o � bem seu mundo, ou tem dificuldade em encontrar um lugar claro para si nas esferas ordenadas da sociedade, termina muitas vezes optando por doar sua simpatia e amor ao que nada tem. � no hospital, no orfanato, no asilo que o Peixes est� presente, fazendo as vezes de anunciador de um novo ciclo, barqueiro que ajuda a alcan�ar uma outra margem do rio. Com os olhos no horizonte largo, os Peixes se destacam nas profiss�es relacionadas com as rela��es exteriores, com o com�rcio de longo alcance, e falam pela m�sica, dan�a e pela poesia. Os Peixes tamb�m est�o nos laborat�rios de f�sica, estudando os segundos iniciais da cria��o do universo. Cosmologia � seu tema natural. Alguns se voltam para a f�, outros para a f�sica. Ambos convergem para o mist�rio do espa�o. E por ele, fazem m�gica - n�o se importam em terminar nada, porque sua fun��o � esbo�ar, anunciar, delinear - outros vir�o no futuro para dar forma acabada ao que anunciaram. Ao generoso Peixes, s� cabe anunciar o sentido ou perguntar-se sobre ele. Toda essa mistura de fantasia, pressentimento, docilidade e sabedoria termina compondo um ser atraente e misterioso. Rom�ntico como ele s�, cheio de lirismo, envolve quem ama com mil pequenas surpresas - e muitas vezes escolhe mal seu parceiro, para depois sofrer - Peixes tem uma pequena queda para o sofrimento. No amor, usa e abusa de seu poder de descobrir o que n�o � revelado - mas n�o para controlar, mas para ter um encontro de alma mais profundo e completo. Por ser inst�vel como o oceano, curioso e explorador, pode n�o se adaptar muito bem � vida do casamento, embora seja um dos amantes mais devotados do zod�aco. Os Peixes regem os p�s, que carregam todo o peso do corpo, limite mais humilde - e fundamental, pois s�o eles que nos carregam para toda parte. Sem prestar muita aten��o onde coloca os p�s, Peixes de tempos em tempos � lembrado de sua conex�o com a terra por meio de afec��es nessa parte do corpo. Aos poucos, sua alma antiga vai aprendendo que tamb�m � preciso manter os p�s na terra para poder continuar anunciando o mundo que pressente. Al�m disso, Peixes tem rela��o com o sistema linf�tico - um dos sistemas que carrega l�quidos por nosso corpo - e o centro de energia (chakra) da coroa, por onde os orientais dizem entrar a energia do universo.\n","PERFIL DE PEIXES",MB_OK);
                      goto denovo1;
                      break;
                 case 3:
                      MessageBox(0, "\n\t\t> QUALIDADE:Frio e �mido (Agua)-baixa energia e grande capacidade para juntar e conectar\n\n\t\t> NATUREZA: passivo, feminino, noturno, par\n\n\t\t> POLARIDADE: negativo\n\n\t\t> REGENTE:  Jupiter (tradicional) e Netuno (moderno)\n\n\t\t> CORES: azul-mar, verde-azulado, cinza-esverdeado, tons iridescentes\n\n\t\t> CORPO: pes, sistema linfatico\n\n\t\t> PALAVRAS - CHAVE: Compaixao, Emocao, Infinito, Intuicao, Romantismo, Altruismo, Devocao, Piedade, Escapismo\n\n\t\t> SIGNOS COMPATIVEIS:   Aries, Gemeos, Libra e Cancer.\n\n\t\t> VERBO : Crer  ","FICHA T�CNICA DE PEIXES",MB_OK);                 
                      goto denovo1;
                      break;
                 case 4:
                      MessageBox(0, "\n\tPeixes adora surpresas feitas com presentes originais, escolhidos especialmente para sua alma l�rica e rom�ntica. Como adora viajar e sabe apreciaras artes e a musica, um �timo presente s�o os CDs de world music, os instrumentos musicais. Tamb�m adora perfumes, ess�ncias quentes e ex�ticas, roupas despojadas, mas com um certo toque rom�ntico. Peixes representa o mundo alternativo - este filho de J�piter adora a boa literatura e a poesia que proporcionam a ele a oportunidade de sonhar com um mundo realmente mais misericordioso e am�vel. Buc�lico, ama a natureza e seus diversos habitantes e ru�dos - os passarinhos, as baleias, de prefer�ncia as paisagens pr�ximas ao oceano. Peixes sente grande atra��o pelos grandes espa�os, sentindo-se a vontade bem no meio da massa de pessoas, onde se torna indistinto, por vezes, para ressurgir com novas id�ias repletas de poesia, para maravilhar as pessoas. Signo da fotografia, do cinema, da cenografia, pois rege a ilus�o e a fantasia, voc� acerta em presente�-lo com uma filmadora, uma c�mera de fotografia, uma cole��o de filmes em v�deo. Preste aten��o ao que o encanta, se quiser acertar e cheio - cada filho deste signo possui um mundo interior riqu�ssimo e vari�vel como o oceano e os espa�os siderais que tanto o atraem.","DICAS ESPECIAIS PARA PRESENTEAR PEIXES",MB_OK);    printf ("*_____________________________________________________________________________*\n");
                      goto denovo1;
                      break;
                 case 5:
                     MessageBox(0, "\n\tArtistas sensiveis por natureza, os piscianos se realizam em carreiras em que tenham de viajar muito, como turismo, diplomacia, direito internacional, vendas internacionais, pois apelam ao sentimento das pessoas. Quando artistas, liricos na musica, na poesia, no canto e danca. Se dao bem em atividades fluidas, que nao tenham pressa para serem concluidas, preferem rotinas elasticas, e podem mudar de atividade e ramo conforme as epocas.","PROFISS�ES",MB_OK);
                     goto denovo1;
                     break;
                 case 6:
                      MessageBox(0, "\n\tVoc� pensa que todo mundo � cabe�a de bagre e s� voc� � o esperto. O que voc� n�o sabe � que, na verdade, voc� � o grande cabe�a de bagre. Voc� se acha o sujeito mais inteligente do mundo e tem a maldita mania de achar que os outros precisam de sua ajuda. Voc� se acha superior e considera os outros idiotas. Adora reprimir tudo e todos. � impaciente, mal-educado e fica dando conselhos f�teis aos outros e sempre consegue afundar as pessoas que seguem seus conselhos idiotas. Voc� n�o passa de um desorganizado, n�o tem praticidade alguma e n�o sabe nem em que planeta vive. Quando algu�m te questiona, voc� recorre ao misticismo, uma vez que sua intelig�ncia � limitada.","LADO NEGRO DE PEIXES",MB_OK);
                      goto denovo1;
                      break;
                 case 7:
                      MessageBox(0, "\n1 - Voc� ter� que utilizar todas as suas habilidades para cortejar-lhes. Os piscianos vivem em outro mundo.\n2 - Os pertencentes a esse signo s�o do tipo emocional. Assim que o sexo ser� melhor num contexto de amor e intimidade. Para conectar com eles voc� dever� ter sempre em mente que os amantes piscianos procuram, em realidade, uma alma parceira e amiga.\n3 - Para comprazer um amante pisciano voc� ter� que passar algum tempo no reino da fantasia. Sonhe conjuntamente com ele e ser� recompensado com amor puro e um sexo muito especial.\n4 - Mas, paradoxalmente, em rela��o ao sexo como casal ele lhe obrigar� a ser pr�tico. Ainda que os piscianos queiram reter-lhe em seu mundo de sonhos e fantasia, voc� dever� ajudar-lhes a transladar sua energia para que ponham os p�s no ch�o. Caso contr�rio, os dois flutuar�o para fora da realidade, e a vida no mundo real acabar� fazendo cobran�as. ","PEIXES: AMOR E SEXO",MB_OK);
                      goto denovo1;
                      break;
                 default:
                        MessageBox(0,"OP��O INEXISTENTE. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto denovo1;
                 
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
    MessageBox(0,"Este e um programa divertido sobre esoterismo. Na proxima tela, selecione\num signo e verifique\ncompatibilidades de signos, perfis, dentre outras coisas.\n\nOBS: As informa��es contidas neste programa destinam-se meramente ao entretenimento e informa��o alheios.\nCabendo a cada um tirar suas pr�prias conclus�es.\n\nDivirta-se!!   ;D\n\n\t\t\t\\o/","Esoterismo System",MB_OK);
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
                       MessageBox(0,"CODIGO INV�LIDO. Tente novamente!!","OPS",MB_OK|MB_ICONERROR); goto signos;
                        }// fim switch
	MessageBox(0,"\nOBRIGADA POR UTILIZAR O ESOTERISMO SYSTEM!!\n\t     AT� A PR�XIMA...\n\nDESENVOLVIDO POR: Daniela Duarte\nPROFESSOR: Manfrine Silva Santos\nTURMA: MAI - 1\n\n\t\t\\o/","Esoterismo System",MB_OK|MB_ICONINFORMATION);
	
} // fim Esoterismo System





