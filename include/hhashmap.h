#ifndef HMAP_H_
#define HMAP_H_
#include <stddef.h>

[[nodiscard]] int searchHashMap(const char *const key,
                                const char *const *const hashmap,
                                const size_t size, size_t *const pos);

[[nodiscard]] int allocHashMap(char **const hashmap, char const *const key,
                               const size_t size, size_t *const pos);

const size_t hash1(const char *const key);
const size_t hash2(const size_t hash, const int iter);

#endif // HMAP_H_
