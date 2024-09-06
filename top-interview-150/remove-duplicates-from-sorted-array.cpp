class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.empty()) return 0; // Se o vetor estiver vazio, já retorna 0

        int uniqueIndex = 0; // Índice para a próxima posição única

        // Começa a partir do segundo elemento (primeiro é único)
        for (int i = 1; i < nums.size(); i++) {
            // Se o elemento atual é diferente do último elemento único encontrado
            if (nums[i] != nums[uniqueIndex]) {
                uniqueIndex++; // Move para o próximo índice único
                nums[uniqueIndex] = nums[i]; // Atualiza o vetor com o valor único
            }
        }

        return uniqueIndex + 1;
    }
};
