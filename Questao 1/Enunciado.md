# 1255. Pontuação Máxima de Palavras Formadas por Letras

## Descrição

Dada uma lista de palavras, uma lista de letras individuais (que podem se repetir) e a pontuação de cada caractere.

Retorne a pontuação máxima de qualquer conjunto válido de palavras formadas usando as letras fornecidas (`words[i]` não pode ser usado duas ou mais vezes).

Não é necessário usar todos os caracteres em `letters` e cada letra só pode ser usada uma vez. A pontuação das letras 'a', 'b', 'c', ... ,'z' é dada por `score[0]`, `score[1]`, ... , `score[25]` respectivamente.

## Exemplos

### Exemplo 1:

**Entrada:** 
```
words = ["dog","cat","dad","good"]
letters = ["a","a","c","d","d","d","g","o","o"]
score = [1,0,9,5,0,0,3,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0]
```

**Saída:** `23`

**Explicação:**
- Pontuação: a=1, c=9, d=5, g=3, o=2
- Dadas as letras, podemos formar as palavras "dad" (5+1+5) e "good" (3+2+2+5) com uma pontuação de 23.
- As palavras "dad" e "dog" obtêm apenas uma pontuação de 21.

### Exemplo 2:

**Entrada:** 
```
words = ["xxxz","ax","bx","cx"]
letters = ["z","a","b","c","x","x","x"]
score = [4,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,10]
```

**Saída:** `27`

**Explicação:**
- Pontuação: a=4, b=4, c=4, x=5, z=10
- Dadas as letras, podemos formar as palavras "ax" (4+5), "bx" (4+5) e "cx" (4+5) com uma pontuação de 27.
- A palavra "xxxz" obtém apenas uma pontuação de 25.

### Exemplo 3:

**Entrada:** 
```
words = ["leetcode"]
letters = ["l","e","t","c","o","d"]
score = [0,0,1,1,1,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0]
```

**Saída:** `0`

**Explicação:**
- A letra "e" só pode ser usada uma vez.

## Restrições

- `1 <= words.length <= 14`
- `1 <= words[i].length <= 15`
- `1 <= letters.length <= 100`
- `letters[i].length == 1`
- `score.length == 26`
- `0 <= score[i] <= 10`
- `words[i]` e `letters[i]` contêm apenas letras minúsculas do alfabeto inglês.