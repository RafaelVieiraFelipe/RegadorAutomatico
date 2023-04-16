# RegadorAutomatico
Regador automático, usando sensor de umidade e sensor de luz. 
## Projeto compatível com o código
![image](https://user-images.githubusercontent.com/68482938/232349903-8473309d-9576-417e-aff0-d41974551d37.png)

Para verificar o funcionamento ou fazer testes: https://www.tinkercad.com/things/bSr9aG6dRt0
## Obeservações importantes
Ao invés do motor CC, o projeto verdadeiro utiliza uma mini bomba d'água submersiva de 3V, por isso das pilhas colocadas em série.

E o projeto real também possui um sensor de umidade capacitivo ao invés do resistivo, o funcionamento é o mesmo, mas a lógica é invertida, o que ocasionar um resultado aparentemente errado, porém para o projeto real está correto, caso esteja usando um sensor resistivo, basta trocar o "if(leitura_sensor > umidade ideal)" por "if(leitura_sensor < umidade ideal)".
## resultado
O Led deve acender caso o sensor LDR dectecte falta de luz, e o motor deve ser atividade caso o sensor de umidade detecte que o solo não esteja de acordo com o ideal para determinada planta.
