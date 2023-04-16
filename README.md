# RegadorAutomatico
Regador automático, usando sensor de umidade e sensor de luz. 
## Projeto compatível com o código
![image](https://user-images.githubusercontent.com/68482938/232348264-3cbe8431-dca9-4ff2-aa68-23b7fd340951.png)
## Obeservações importantes
Ao invés do motor CC, o projeto verdadeiro utiliza uma mini bomba d'água submersiva de 3V, por isso das pilhas colocadas em série.

E o projeto real também possui um sensor de umidade capacitivo ao invés do resistivo, o funcionamento é o mesmo, mas a lógica é invertida, o que vai resultar em um resultado aparentemente errado, porém para o projeto real está certo, caso esteja usando um sensor resistivo, basta trocar o "if(leitura_sensor > umidade ideal)" por "if(leitura_sensor < umidade ideal)".
## resultado
O Led deve acender caso o sensor LDR dectecte falta de luz, e o motor deve ser atividade caso o sensor de umidade detecte que o solo não esteja de acordo com o ideal para determinada planta.
