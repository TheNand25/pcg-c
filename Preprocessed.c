# 0 "check-pcg32Test.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "check-pcg32Test.c"
# 26 "check-pcg32Test.c"
# 1 "pcg_variants.h" 1
# 41 "pcg_variants.h"
# 1 "/usr/include/inttypes.h" 1 3 4
# 16 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/newlib.h" 1 3 4
# 10 "/usr/include/newlib.h" 3 4
# 1 "/usr/include/_newlib_version.h" 1 3 4
# 11 "/usr/include/newlib.h" 2 3 4
# 17 "/usr/include/inttypes.h" 2 3 4
# 1 "/usr/include/sys/config.h" 1 3 4



# 1 "/usr/include/machine/ieeefp.h" 1 3 4
# 5 "/usr/include/sys/config.h" 2 3 4
# 1 "/usr/include/sys/features.h" 1 3 4
# 6 "/usr/include/sys/config.h" 2 3 4
# 238 "/usr/include/sys/config.h" 3 4
# 1 "/usr/include/cygwin/config.h" 1 3 4
# 239 "/usr/include/sys/config.h" 2 3 4
# 18 "/usr/include/inttypes.h" 2 3 4
# 1 "/usr/include/sys/_intsup.h" 1 3 4
# 35 "/usr/include/sys/_intsup.h" 3 4








# 190 "/usr/include/sys/_intsup.h" 3 4








# 19 "/usr/include/inttypes.h" 2 3 4
# 1 "/usr/include/_ansi.h" 1 3 4
# 20 "/usr/include/inttypes.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 12 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/machine/_default_types.h" 1 3 4
# 41 "/usr/include/machine/_default_types.h" 3 4

# 41 "/usr/include/machine/_default_types.h" 3 4
typedef signed char __int8_t;

typedef unsigned char __uint8_t;
# 55 "/usr/include/machine/_default_types.h" 3 4
typedef short int __int16_t;

typedef short unsigned int __uint16_t;
# 77 "/usr/include/machine/_default_types.h" 3 4
typedef int __int32_t;

typedef unsigned int __uint32_t;
# 103 "/usr/include/machine/_default_types.h" 3 4
typedef long int __int64_t;

typedef long unsigned int __uint64_t;
# 134 "/usr/include/machine/_default_types.h" 3 4
typedef signed char __int_least8_t;

typedef unsigned char __uint_least8_t;
# 160 "/usr/include/machine/_default_types.h" 3 4
typedef short int __int_least16_t;

typedef short unsigned int __uint_least16_t;
# 182 "/usr/include/machine/_default_types.h" 3 4
typedef int __int_least32_t;

typedef unsigned int __uint_least32_t;
# 200 "/usr/include/machine/_default_types.h" 3 4
typedef long int __int_least64_t;

typedef long unsigned int __uint_least64_t;
# 214 "/usr/include/machine/_default_types.h" 3 4
typedef long int __intmax_t;







typedef long unsigned int __uintmax_t;







typedef long int __intptr_t;

typedef long unsigned int __uintptr_t;
# 13 "/usr/include/stdint.h" 2 3 4

# 1 "/usr/include/sys/_stdint.h" 1 3 4
# 20 "/usr/include/sys/_stdint.h" 3 4
typedef __int8_t int8_t ;



typedef __uint8_t uint8_t ;







typedef __int16_t int16_t ;



typedef __uint16_t uint16_t ;







typedef __int32_t int32_t ;



typedef __uint32_t uint32_t ;







typedef __int64_t int64_t ;



typedef __uint64_t uint64_t ;






typedef __intmax_t intmax_t;




typedef __uintmax_t uintmax_t;




typedef __intptr_t intptr_t;




typedef __uintptr_t uintptr_t;
# 15 "/usr/include/stdint.h" 2 3 4






typedef __int_least8_t int_least8_t;
typedef __uint_least8_t uint_least8_t;




typedef __int_least16_t int_least16_t;
typedef __uint_least16_t uint_least16_t;




typedef __int_least32_t int_least32_t;
typedef __uint_least32_t uint_least32_t;




typedef __int_least64_t int_least64_t;
typedef __uint_least64_t uint_least64_t;
# 51 "/usr/include/stdint.h" 3 4
  typedef signed char int_fast8_t;
  typedef unsigned char uint_fast8_t;
# 61 "/usr/include/stdint.h" 3 4
  typedef long int int_fast16_t;
  typedef long unsigned int uint_fast16_t;
# 71 "/usr/include/stdint.h" 3 4
  typedef long int int_fast32_t;
  typedef long unsigned int uint_fast32_t;
# 81 "/usr/include/stdint.h" 3 4
  typedef long int int_fast64_t;
  typedef long unsigned int uint_fast64_t;
# 10 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stdint.h" 2 3 4
# 21 "/usr/include/inttypes.h" 2 3 4

# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 1 3 4
# 321 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 3 4
typedef short unsigned int wchar_t;
# 23 "/usr/include/inttypes.h" 2 3 4


# 1 "/usr/include/sys/_locale.h" 1 3 4
# 9 "/usr/include/sys/_locale.h" 3 4
struct __locale_t;
typedef struct __locale_t *locale_t;
# 26 "/usr/include/inttypes.h" 2 3 4
# 312 "/usr/include/inttypes.h" 3 4
typedef struct {
  intmax_t quot;
  intmax_t rem;
} imaxdiv_t;

struct _reent;





extern intmax_t imaxabs(intmax_t);
extern imaxdiv_t imaxdiv(intmax_t __numer, intmax_t __denomer);
extern intmax_t strtoimax(const char *__restrict, char **__restrict, int);
extern intmax_t _strtoimax_r(struct _reent *, const char *__restrict, char **__restrict, int);
extern uintmax_t strtoumax(const char *__restrict, char **__restrict, int);
extern uintmax_t _strtoumax_r(struct _reent *, const char *__restrict, char **__restrict, int);
extern intmax_t wcstoimax(const wchar_t *__restrict, wchar_t **__restrict, int);
extern intmax_t _wcstoimax_r(struct _reent *, const wchar_t *__restrict, wchar_t **__restrict, int);
extern uintmax_t wcstoumax(const wchar_t *__restrict, wchar_t **__restrict, int);
extern uintmax_t _wcstoumax_r(struct _reent *, const wchar_t *__restrict, wchar_t **__restrict, int);


extern intmax_t strtoimax_l(const char *__restrict, char **_restrict, int, locale_t);
extern uintmax_t strtoumax_l(const char *__restrict, char **_restrict, int, locale_t);
extern intmax_t wcstoimax_l(const wchar_t *__restrict, wchar_t **_restrict, int, locale_t);
extern uintmax_t wcstoumax_l(const wchar_t *__restrict, wchar_t **_restrict, int, locale_t);
# 42 "pcg_variants.h" 2



# 44 "pcg_variants.h"
   typedef __uint128_t pcg128_t;
# 64 "pcg_variants.h"
inline uint8_t pcg_rotr_8(uint8_t value, unsigned int rot)
{
# 74 "pcg_variants.h"
    return (value >> rot) | (value << ((- rot) & 7));

}

inline uint16_t pcg_rotr_16(uint16_t value, unsigned int rot)
{




    return (value >> rot) | (value << ((- rot) & 15));

}

inline uint32_t pcg_rotr_32(uint32_t value, unsigned int rot)
{




    return (value >> rot) | (value << ((- rot) & 31));

}

inline uint64_t pcg_rotr_64(uint64_t value, unsigned int rot)
{






    return (value >> rot) | (value << ((- rot) & 63));

}


inline pcg128_t pcg_rotr_128(pcg128_t value, unsigned int rot)
{
    return (value >> rot) | (value << ((- rot) & 127));
}
# 123 "pcg_variants.h"
inline uint8_t pcg_output_xsh_rs_16_8(uint16_t state)
{
    return (uint8_t)(((state >> 7u) ^ state) >> ((state >> 14u) + 3u));
}

inline uint16_t pcg_output_xsh_rs_32_16(uint32_t state)
{
    return (uint16_t)(((state >> 11u) ^ state) >> ((state >> 30u) + 11u));
}

inline uint32_t pcg_output_xsh_rs_64_32(uint64_t state)
{

    return (uint32_t)(((state >> 22u) ^ state) >> ((state >> 61u) + 22u));
}


inline uint64_t pcg_output_xsh_rs_128_64(pcg128_t state)
{
    return (uint64_t)(((state >> 43u) ^ state) >> ((state >> 124u) + 45u));
}




inline uint8_t pcg_output_xsh_rr_16_8(uint16_t state)
{
    return pcg_rotr_8(((state >> 5u) ^ state) >> 5u, state >> 13u);
}

inline uint16_t pcg_output_xsh_rr_32_16(uint32_t state)
{
    return pcg_rotr_16(((state >> 10u) ^ state) >> 12u, state >> 28u);
}

inline uint32_t pcg_output_xsh_rr_64_32(uint64_t state)
{
    return pcg_rotr_32(((state >> 18u) ^ state) >> 27u, state >> 59u);
}


inline uint64_t pcg_output_xsh_rr_128_64(pcg128_t state)
{
    return pcg_rotr_64(((state >> 29u) ^ state) >> 58u, state >> 122u);
}




inline uint8_t pcg_output_rxs_m_xs_8_8(uint8_t state)
{
    uint8_t word = ((state >> ((state >> 6u) + 2u)) ^ state) * 217u;
    return (word >> 6u) ^ word;
}

inline uint16_t pcg_output_rxs_m_xs_16_16(uint16_t state)
{
    uint16_t word = ((state >> ((state >> 13u) + 3u)) ^ state) * 62169u;
    return (word >> 11u) ^ word;
}

inline uint32_t pcg_output_rxs_m_xs_32_32(uint32_t state)
{
    uint32_t word = ((state >> ((state >> 28u) + 4u)) ^ state) * 277803737u;
    return (word >> 22u) ^ word;
}

inline uint64_t pcg_output_rxs_m_xs_64_64(uint64_t state)
{
    uint64_t word = ((state >> ((state >> 59u) + 5u)) ^ state)
                    * 12605985483714917081ull;
    return (word >> 43u) ^ word;
}


inline pcg128_t pcg_output_rxs_m_xs_128_128(pcg128_t state)
{
    pcg128_t word = ((state >> ((state >> 122u) + 6u)) ^ state)
                       * (((((pcg128_t)17766728186571221404ULL) << 64) + 12605985483714917081ULL)
                                                                      );

    return (word >> 86u) ^ word;
}




inline uint32_t pcg_output_xsl_rr_64_32(uint64_t state)
{
    return pcg_rotr_32(((uint32_t)(state >> 32u)) ^ (uint32_t)state,
                       state >> 59u);
}


inline uint64_t pcg_output_xsl_rr_128_64(pcg128_t state)
{
    return pcg_rotr_64(((uint64_t)(state >> 64u)) ^ (uint64_t)state,
                       state >> 122u);
}




inline uint64_t pcg_output_xsl_rr_rr_64_64(uint64_t state)
{
    uint32_t rot1 = (uint32_t)(state >> 59u);
    uint32_t high = (uint32_t)(state >> 32u);
    uint32_t low = (uint32_t)state;
    uint32_t xored = high ^ low;
    uint32_t newlow = pcg_rotr_32(xored, rot1);
    uint32_t newhigh = pcg_rotr_32(high, newlow & 31u);
    return (((uint64_t)newhigh) << 32u) | newlow;
}


inline pcg128_t pcg_output_xsl_rr_rr_128_128(pcg128_t state)
{
    uint32_t rot1 = (uint32_t)(state >> 122u);
    uint64_t high = (uint64_t)(state >> 64u);
    uint64_t low = (uint64_t)state;
    uint64_t xored = high ^ low;
    uint64_t newlow = pcg_rotr_64(xored, rot1);
    uint64_t newhigh = pcg_rotr_64(high, newlow & 63u);
    return (((pcg128_t)newhigh) << 64u) | newlow;
}
# 311 "pcg_variants.h"
struct pcg_state_8 {
    uint8_t state;
};

struct pcg_state_16 {
    uint16_t state;
};

struct pcg_state_32 {
    uint32_t state;
};

struct pcg_state_64 {
    uint64_t state;
};


struct pcg_state_128 {
    pcg128_t state;
};




struct pcg_state_setseq_8 {
    uint8_t state;
    uint8_t inc;
};

struct pcg_state_setseq_16 {
    uint16_t state;
    uint16_t inc;
};

struct pcg_state_setseq_32 {
    uint32_t state;
    uint32_t inc;
};

struct pcg_state_setseq_64 {
    uint64_t state;
    uint64_t inc;
};


struct pcg_state_setseq_128 {
    pcg128_t state;
    pcg128_t inc;
};




extern uint8_t pcg_advance_lcg_8(uint8_t state, uint8_t delta, uint8_t cur_mult,
                                 uint8_t cur_plus);
extern uint16_t pcg_advance_lcg_16(uint16_t state, uint16_t delta,
                                   uint16_t cur_mult, uint16_t cur_plus);
extern uint32_t pcg_advance_lcg_32(uint32_t state, uint32_t delta,
                                   uint32_t cur_mult, uint32_t cur_plus);
extern uint64_t pcg_advance_lcg_64(uint64_t state, uint64_t delta,
                                   uint64_t cur_mult, uint64_t cur_plus);


extern pcg128_t pcg_advance_lcg_128(pcg128_t state, pcg128_t delta,
                                    pcg128_t cur_mult, pcg128_t cur_plus);







inline void pcg_oneseq_8_step_r(struct pcg_state_8* rng)
{
    rng->state = rng->state * 141U
                 + 77U;
}

inline void pcg_oneseq_8_advance_r(struct pcg_state_8* rng, uint8_t delta)
{
    rng->state = pcg_advance_lcg_8(rng->state, delta, 141U,
                                   77U);
}

inline void pcg_mcg_8_step_r(struct pcg_state_8* rng)
{
    rng->state = rng->state * 141U;
}

inline void pcg_mcg_8_advance_r(struct pcg_state_8* rng, uint8_t delta)
{
    rng->state
        = pcg_advance_lcg_8(rng->state, delta, 141U, 0u);
}

inline void pcg_unique_8_step_r(struct pcg_state_8* rng)
{
    rng->state = rng->state * 141U
                 + (uint8_t)(((intptr_t)rng) | 1u);
}

inline void pcg_unique_8_advance_r(struct pcg_state_8* rng, uint8_t delta)
{
    rng->state = pcg_advance_lcg_8(rng->state, delta, 141U,
                                   (uint8_t)(((intptr_t)rng) | 1u));
}

inline void pcg_setseq_8_step_r(struct pcg_state_setseq_8* rng)
{
    rng->state = rng->state * 141U + rng->inc;
}

inline void pcg_setseq_8_advance_r(struct pcg_state_setseq_8* rng,
                                   uint8_t delta)
{
    rng->state = pcg_advance_lcg_8(rng->state, delta, 141U,
                                   rng->inc);
}

inline void pcg_oneseq_16_step_r(struct pcg_state_16* rng)
{
    rng->state = rng->state * 12829U
                 + 47989U;
}

inline void pcg_oneseq_16_advance_r(struct pcg_state_16* rng, uint16_t delta)
{
    rng->state = pcg_advance_lcg_16(
        rng->state, delta, 12829U, 47989U);
}

inline void pcg_mcg_16_step_r(struct pcg_state_16* rng)
{
    rng->state = rng->state * 12829U;
}

inline void pcg_mcg_16_advance_r(struct pcg_state_16* rng, uint16_t delta)
{
    rng->state
        = pcg_advance_lcg_16(rng->state, delta, 12829U, 0u);
}

inline void pcg_unique_16_step_r(struct pcg_state_16* rng)
{
    rng->state = rng->state * 12829U
                 + (uint16_t)(((intptr_t)rng) | 1u);
}

inline void pcg_unique_16_advance_r(struct pcg_state_16* rng, uint16_t delta)
{
    rng->state
        = pcg_advance_lcg_16(rng->state, delta, 12829U,
                             (uint16_t)(((intptr_t)rng) | 1u));
}

inline void pcg_setseq_16_step_r(struct pcg_state_setseq_16* rng)
{
    rng->state = rng->state * 12829U + rng->inc;
}

inline void pcg_setseq_16_advance_r(struct pcg_state_setseq_16* rng,
                                    uint16_t delta)
{
    rng->state = pcg_advance_lcg_16(rng->state, delta,
                                    12829U, rng->inc);
}

inline void pcg_oneseq_32_step_r(struct pcg_state_32* rng)
{
    rng->state = rng->state * 747796405U
                 + 2891336453U;
}

inline void pcg_oneseq_32_advance_r(struct pcg_state_32* rng, uint32_t delta)
{
    rng->state = pcg_advance_lcg_32(
        rng->state, delta, 747796405U, 2891336453U);
}

inline void pcg_mcg_32_step_r(struct pcg_state_32* rng)
{
    rng->state = rng->state * 747796405U;
}

inline void pcg_mcg_32_advance_r(struct pcg_state_32* rng, uint32_t delta)
{
    rng->state
        = pcg_advance_lcg_32(rng->state, delta, 747796405U, 0u);
}

inline void pcg_unique_32_step_r(struct pcg_state_32* rng)
{
    rng->state = rng->state * 747796405U
                 + (uint32_t)(((intptr_t)rng) | 1u);
}

inline void pcg_unique_32_advance_r(struct pcg_state_32* rng, uint32_t delta)
{
    rng->state
        = pcg_advance_lcg_32(rng->state, delta, 747796405U,
                             (uint32_t)(((intptr_t)rng) | 1u));
}

inline void pcg_setseq_32_step_r(struct pcg_state_setseq_32* rng)
{
    rng->state = rng->state * 747796405U + rng->inc;
}

inline void pcg_setseq_32_advance_r(struct pcg_state_setseq_32* rng,
                                    uint32_t delta)
{
    rng->state = pcg_advance_lcg_32(rng->state, delta,
                                    747796405U, rng->inc);
}

inline void pcg_oneseq_64_step_r(struct pcg_state_64* rng)
{
    rng->state = rng->state * 6364136223846793005ULL
                 + 1442695040888963407ULL;
}

inline void pcg_oneseq_64_advance_r(struct pcg_state_64* rng, uint64_t delta)
{
    rng->state = pcg_advance_lcg_64(
        rng->state, delta, 6364136223846793005ULL, 1442695040888963407ULL);
}

inline void pcg_mcg_64_step_r(struct pcg_state_64* rng)
{
    rng->state = rng->state * 6364136223846793005ULL;
}

inline void pcg_mcg_64_advance_r(struct pcg_state_64* rng, uint64_t delta)
{
    rng->state
        = pcg_advance_lcg_64(rng->state, delta, 6364136223846793005ULL, 0u);
}

inline void pcg_unique_64_step_r(struct pcg_state_64* rng)
{
    rng->state = rng->state * 6364136223846793005ULL
                 + (uint64_t)(((intptr_t)rng) | 1u);
}

inline void pcg_unique_64_advance_r(struct pcg_state_64* rng, uint64_t delta)
{
    rng->state
        = pcg_advance_lcg_64(rng->state, delta, 6364136223846793005ULL,
                             (uint64_t)(((intptr_t)rng) | 1u));
}

inline void pcg_setseq_64_step_r(struct pcg_state_setseq_64* rng)
{
    rng->state = rng->state * 6364136223846793005ULL + rng->inc;
}

inline void pcg_setseq_64_advance_r(struct pcg_state_setseq_64* rng,
                                    uint64_t delta)
{
    rng->state = pcg_advance_lcg_64(rng->state, delta,
                                    6364136223846793005ULL, rng->inc);
}


inline void pcg_oneseq_128_step_r(struct pcg_state_128* rng)
{
    rng->state = rng->state * ((((pcg128_t)2549297995355413924ULL) << 64) + 4865540595714422341ULL)
                 + ((((pcg128_t)6364136223846793005ULL) << 64) + 1442695040888963407ULL);
}



inline void pcg_oneseq_128_advance_r(struct pcg_state_128* rng, pcg128_t delta)
{
    rng->state
        = pcg_advance_lcg_128(rng->state, delta, ((((pcg128_t)2549297995355413924ULL) << 64) + 4865540595714422341ULL),
                              ((((pcg128_t)6364136223846793005ULL) << 64) + 1442695040888963407ULL));
}



inline void pcg_mcg_128_step_r(struct pcg_state_128* rng)
{
    rng->state = rng->state * ((((pcg128_t)2549297995355413924ULL) << 64) + 4865540595714422341ULL);
}



inline void pcg_mcg_128_advance_r(struct pcg_state_128* rng, pcg128_t delta)
{
    rng->state = pcg_advance_lcg_128(rng->state, delta,
                                     ((((pcg128_t)2549297995355413924ULL) << 64) + 4865540595714422341ULL), 0u);
}



inline void pcg_unique_128_step_r(struct pcg_state_128* rng)
{
    rng->state = rng->state * ((((pcg128_t)2549297995355413924ULL) << 64) + 4865540595714422341ULL)
                 + (pcg128_t)(((intptr_t)rng) | 1u);
}



inline void pcg_unique_128_advance_r(struct pcg_state_128* rng, pcg128_t delta)
{
    rng->state
        = pcg_advance_lcg_128(rng->state, delta, ((((pcg128_t)2549297995355413924ULL) << 64) + 4865540595714422341ULL),
                              (pcg128_t)(((intptr_t)rng) | 1u));
}



inline void pcg_setseq_128_step_r(struct pcg_state_setseq_128* rng)
{
    rng->state = rng->state * ((((pcg128_t)2549297995355413924ULL) << 64) + 4865540595714422341ULL) + rng->inc;
}



inline void pcg_setseq_128_advance_r(struct pcg_state_setseq_128* rng,
                                     pcg128_t delta)
{
    rng->state = pcg_advance_lcg_128(rng->state, delta,
                                     ((((pcg128_t)2549297995355413924ULL) << 64) + 4865540595714422341ULL), rng->inc);
}







inline void pcg_oneseq_8_srandom_r(struct pcg_state_8* rng, uint8_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_8_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_8_step_r(rng);
}

inline void pcg_mcg_8_srandom_r(struct pcg_state_8* rng, uint8_t initstate)
{
    rng->state = initstate | 1u;
}

inline void pcg_unique_8_srandom_r(struct pcg_state_8* rng, uint8_t initstate)
{
    rng->state = 0U;
    pcg_unique_8_step_r(rng);
    rng->state += initstate;
    pcg_unique_8_step_r(rng);
}

inline void pcg_setseq_8_srandom_r(struct pcg_state_setseq_8* rng,
                                   uint8_t initstate, uint8_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_8_step_r(rng);
    rng->state += initstate;
    pcg_setseq_8_step_r(rng);
}

inline void pcg_oneseq_16_srandom_r(struct pcg_state_16* rng,
                                    uint16_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_16_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_16_step_r(rng);
}

inline void pcg_mcg_16_srandom_r(struct pcg_state_16* rng, uint16_t initstate)
{
    rng->state = initstate | 1u;
}

inline void pcg_unique_16_srandom_r(struct pcg_state_16* rng,
                                    uint16_t initstate)
{
    rng->state = 0U;
    pcg_unique_16_step_r(rng);
    rng->state += initstate;
    pcg_unique_16_step_r(rng);
}

inline void pcg_setseq_16_srandom_r(struct pcg_state_setseq_16* rng,
                                    uint16_t initstate, uint16_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_16_step_r(rng);
    rng->state += initstate;
    pcg_setseq_16_step_r(rng);
}

inline void pcg_oneseq_32_srandom_r(struct pcg_state_32* rng,
                                    uint32_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_32_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_32_step_r(rng);
}

inline void pcg_mcg_32_srandom_r(struct pcg_state_32* rng, uint32_t initstate)
{
    rng->state = initstate | 1u;
}

inline void pcg_unique_32_srandom_r(struct pcg_state_32* rng,
                                    uint32_t initstate)
{
    rng->state = 0U;
    pcg_unique_32_step_r(rng);
    rng->state += initstate;
    pcg_unique_32_step_r(rng);
}

inline void pcg_setseq_32_srandom_r(struct pcg_state_setseq_32* rng,
                                    uint32_t initstate, uint32_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_32_step_r(rng);
    rng->state += initstate;
    pcg_setseq_32_step_r(rng);
}

inline void pcg_oneseq_64_srandom_r(struct pcg_state_64* rng,
                                    uint64_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_64_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_64_step_r(rng);
}

inline void pcg_mcg_64_srandom_r(struct pcg_state_64* rng, uint64_t initstate)
{
    rng->state = initstate | 1u;
}

inline void pcg_unique_64_srandom_r(struct pcg_state_64* rng,
                                    uint64_t initstate)
{
    rng->state = 0U;
    pcg_unique_64_step_r(rng);
    rng->state += initstate;
    pcg_unique_64_step_r(rng);
}

inline void pcg_setseq_64_srandom_r(struct pcg_state_setseq_64* rng,
                                    uint64_t initstate, uint64_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_64_step_r(rng);
    rng->state += initstate;
    pcg_setseq_64_step_r(rng);
}


inline void pcg_oneseq_128_srandom_r(struct pcg_state_128* rng,
                                     pcg128_t initstate)
{
    rng->state = 0U;
    pcg_oneseq_128_step_r(rng);
    rng->state += initstate;
    pcg_oneseq_128_step_r(rng);
}



inline void pcg_mcg_128_srandom_r(struct pcg_state_128* rng, pcg128_t initstate)
{
    rng->state = initstate | 1u;
}



inline void pcg_unique_128_srandom_r(struct pcg_state_128* rng,
                                     pcg128_t initstate)
{
    rng->state = 0U;
    pcg_unique_128_step_r(rng);
    rng->state += initstate;
    pcg_unique_128_step_r(rng);
}



inline void pcg_setseq_128_srandom_r(struct pcg_state_setseq_128* rng,
                                     pcg128_t initstate, pcg128_t initseq)
{
    rng->state = 0U;
    rng->inc = (initseq << 1u) | 1u;
    pcg_setseq_128_step_r(rng);
    rng->state += initstate;
    pcg_setseq_128_step_r(rng);
}
# 846 "pcg_variants.h"
inline uint8_t pcg_oneseq_16_xsh_rs_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_oneseq_16_step_r(rng);
    return pcg_output_xsh_rs_16_8(oldstate);
}

inline uint8_t pcg_oneseq_16_xsh_rs_8_boundedrand_r(struct pcg_state_16* rng,
                                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_oneseq_16_xsh_rs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t pcg_oneseq_32_xsh_rs_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_oneseq_32_step_r(rng);
    return pcg_output_xsh_rs_32_16(oldstate);
}

inline uint16_t pcg_oneseq_32_xsh_rs_16_boundedrand_r(struct pcg_state_32* rng,
                                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_oneseq_32_xsh_rs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t pcg_oneseq_64_xsh_rs_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_xsh_rs_64_32(oldstate);
}

inline uint32_t pcg_oneseq_64_xsh_rs_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_64_xsh_rs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_oneseq_128_xsh_rs_64_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_xsh_rs_128_64(rng->state);
}



inline uint64_t
pcg_oneseq_128_xsh_rs_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_128_xsh_rs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint8_t pcg_unique_16_xsh_rs_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_unique_16_step_r(rng);
    return pcg_output_xsh_rs_16_8(oldstate);
}

inline uint8_t pcg_unique_16_xsh_rs_8_boundedrand_r(struct pcg_state_16* rng,
                                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_unique_16_xsh_rs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t pcg_unique_32_xsh_rs_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_unique_32_step_r(rng);
    return pcg_output_xsh_rs_32_16(oldstate);
}

inline uint16_t pcg_unique_32_xsh_rs_16_boundedrand_r(struct pcg_state_32* rng,
                                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_unique_32_xsh_rs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t pcg_unique_64_xsh_rs_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_xsh_rs_64_32(oldstate);
}

inline uint32_t pcg_unique_64_xsh_rs_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_64_xsh_rs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_unique_128_xsh_rs_64_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_xsh_rs_128_64(rng->state);
}



inline uint64_t
pcg_unique_128_xsh_rs_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_128_xsh_rs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint8_t pcg_setseq_16_xsh_rs_8_random_r(struct pcg_state_setseq_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_setseq_16_step_r(rng);
    return pcg_output_xsh_rs_16_8(oldstate);
}

inline uint8_t
pcg_setseq_16_xsh_rs_8_boundedrand_r(struct pcg_state_setseq_16* rng,
                                     uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_setseq_16_xsh_rs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t
pcg_setseq_32_xsh_rs_16_random_r(struct pcg_state_setseq_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_setseq_32_step_r(rng);
    return pcg_output_xsh_rs_32_16(oldstate);
}

inline uint16_t
pcg_setseq_32_xsh_rs_16_boundedrand_r(struct pcg_state_setseq_32* rng,
                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_setseq_32_xsh_rs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t
pcg_setseq_64_xsh_rs_32_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_xsh_rs_64_32(oldstate);
}

inline uint32_t
pcg_setseq_64_xsh_rs_32_boundedrand_r(struct pcg_state_setseq_64* rng,
                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_64_xsh_rs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t
pcg_setseq_128_xsh_rs_64_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_xsh_rs_128_64(rng->state);
}



inline uint64_t
pcg_setseq_128_xsh_rs_64_boundedrand_r(struct pcg_state_setseq_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_128_xsh_rs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint8_t pcg_mcg_16_xsh_rs_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_mcg_16_step_r(rng);
    return pcg_output_xsh_rs_16_8(oldstate);
}

inline uint8_t pcg_mcg_16_xsh_rs_8_boundedrand_r(struct pcg_state_16* rng,
                                                 uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_mcg_16_xsh_rs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t pcg_mcg_32_xsh_rs_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_mcg_32_step_r(rng);
    return pcg_output_xsh_rs_32_16(oldstate);
}

inline uint16_t pcg_mcg_32_xsh_rs_16_boundedrand_r(struct pcg_state_32* rng,
                                                   uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_mcg_32_xsh_rs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t pcg_mcg_64_xsh_rs_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_mcg_64_step_r(rng);
    return pcg_output_xsh_rs_64_32(oldstate);
}

inline uint32_t pcg_mcg_64_xsh_rs_32_boundedrand_r(struct pcg_state_64* rng,
                                                   uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_mcg_64_xsh_rs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_mcg_128_xsh_rs_64_random_r(struct pcg_state_128* rng)
{
    pcg_mcg_128_step_r(rng);
    return pcg_output_xsh_rs_128_64(rng->state);
}



inline uint64_t pcg_mcg_128_xsh_rs_64_boundedrand_r(struct pcg_state_128* rng,
                                                    uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_mcg_128_xsh_rs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}




inline uint8_t pcg_oneseq_16_xsh_rr_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_oneseq_16_step_r(rng);
    return pcg_output_xsh_rr_16_8(oldstate);
}

inline uint8_t pcg_oneseq_16_xsh_rr_8_boundedrand_r(struct pcg_state_16* rng,
                                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_oneseq_16_xsh_rr_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t pcg_oneseq_32_xsh_rr_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_oneseq_32_step_r(rng);
    return pcg_output_xsh_rr_32_16(oldstate);
}

inline uint16_t pcg_oneseq_32_xsh_rr_16_boundedrand_r(struct pcg_state_32* rng,
                                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_oneseq_32_xsh_rr_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t pcg_oneseq_64_xsh_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_xsh_rr_64_32(oldstate);
}

inline uint32_t pcg_oneseq_64_xsh_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_64_xsh_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_oneseq_128_xsh_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_xsh_rr_128_64(rng->state);
}



inline uint64_t
pcg_oneseq_128_xsh_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_128_xsh_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint8_t pcg_unique_16_xsh_rr_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_unique_16_step_r(rng);
    return pcg_output_xsh_rr_16_8(oldstate);
}

inline uint8_t pcg_unique_16_xsh_rr_8_boundedrand_r(struct pcg_state_16* rng,
                                                    uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_unique_16_xsh_rr_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t pcg_unique_32_xsh_rr_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_unique_32_step_r(rng);
    return pcg_output_xsh_rr_32_16(oldstate);
}

inline uint16_t pcg_unique_32_xsh_rr_16_boundedrand_r(struct pcg_state_32* rng,
                                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_unique_32_xsh_rr_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t pcg_unique_64_xsh_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_xsh_rr_64_32(oldstate);
}

inline uint32_t pcg_unique_64_xsh_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_64_xsh_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_unique_128_xsh_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_xsh_rr_128_64(rng->state);
}



inline uint64_t
pcg_unique_128_xsh_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_128_xsh_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint8_t pcg_setseq_16_xsh_rr_8_random_r(struct pcg_state_setseq_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_setseq_16_step_r(rng);
    return pcg_output_xsh_rr_16_8(oldstate);
}

inline uint8_t
pcg_setseq_16_xsh_rr_8_boundedrand_r(struct pcg_state_setseq_16* rng,
                                     uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_setseq_16_xsh_rr_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t
pcg_setseq_32_xsh_rr_16_random_r(struct pcg_state_setseq_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_setseq_32_step_r(rng);
    return pcg_output_xsh_rr_32_16(oldstate);
}

inline uint16_t
pcg_setseq_32_xsh_rr_16_boundedrand_r(struct pcg_state_setseq_32* rng,
                                      uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_setseq_32_xsh_rr_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t
pcg_setseq_64_xsh_rr_32_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_xsh_rr_64_32(oldstate);
}

inline uint32_t
pcg_setseq_64_xsh_rr_32_boundedrand_r(struct pcg_state_setseq_64* rng,
                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_64_xsh_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t
pcg_setseq_128_xsh_rr_64_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_xsh_rr_128_64(rng->state);
}



inline uint64_t
pcg_setseq_128_xsh_rr_64_boundedrand_r(struct pcg_state_setseq_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_128_xsh_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint8_t pcg_mcg_16_xsh_rr_8_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_mcg_16_step_r(rng);
    return pcg_output_xsh_rr_16_8(oldstate);
}

inline uint8_t pcg_mcg_16_xsh_rr_8_boundedrand_r(struct pcg_state_16* rng,
                                                 uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_mcg_16_xsh_rr_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t pcg_mcg_32_xsh_rr_16_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_mcg_32_step_r(rng);
    return pcg_output_xsh_rr_32_16(oldstate);
}

inline uint16_t pcg_mcg_32_xsh_rr_16_boundedrand_r(struct pcg_state_32* rng,
                                                   uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_mcg_32_xsh_rr_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t pcg_mcg_64_xsh_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_mcg_64_step_r(rng);
    return pcg_output_xsh_rr_64_32(oldstate);
}

inline uint32_t pcg_mcg_64_xsh_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                   uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_mcg_64_xsh_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_mcg_128_xsh_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_mcg_128_step_r(rng);
    return pcg_output_xsh_rr_128_64(rng->state);
}



inline uint64_t pcg_mcg_128_xsh_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                                    uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_mcg_128_xsh_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}






inline uint8_t pcg_oneseq_8_rxs_m_xs_8_random_r(struct pcg_state_8* rng)
{
    uint8_t oldstate = rng->state;
    pcg_oneseq_8_step_r(rng);
    return pcg_output_rxs_m_xs_8_8(oldstate);
}

inline uint8_t pcg_oneseq_8_rxs_m_xs_8_boundedrand_r(struct pcg_state_8* rng,
                                                     uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_oneseq_8_rxs_m_xs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t pcg_oneseq_16_rxs_m_xs_16_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_oneseq_16_step_r(rng);
    return pcg_output_rxs_m_xs_16_16(oldstate);
}

inline uint16_t
pcg_oneseq_16_rxs_m_xs_16_boundedrand_r(struct pcg_state_16* rng,
                                        uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_oneseq_16_rxs_m_xs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t pcg_oneseq_32_rxs_m_xs_32_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_oneseq_32_step_r(rng);
    return pcg_output_rxs_m_xs_32_32(oldstate);
}

inline uint32_t
pcg_oneseq_32_rxs_m_xs_32_boundedrand_r(struct pcg_state_32* rng,
                                        uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_32_rxs_m_xs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint64_t pcg_oneseq_64_rxs_m_xs_64_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_rxs_m_xs_64_64(oldstate);
}

inline uint64_t
pcg_oneseq_64_rxs_m_xs_64_boundedrand_r(struct pcg_state_64* rng,
                                        uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_64_rxs_m_xs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline pcg128_t pcg_oneseq_128_rxs_m_xs_128_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_rxs_m_xs_128_128(rng->state);
}



inline pcg128_t
pcg_oneseq_128_rxs_m_xs_128_boundedrand_r(struct pcg_state_128* rng,
                                          pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_oneseq_128_rxs_m_xs_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint16_t pcg_unique_16_rxs_m_xs_16_random_r(struct pcg_state_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_unique_16_step_r(rng);
    return pcg_output_rxs_m_xs_16_16(oldstate);
}

inline uint16_t
pcg_unique_16_rxs_m_xs_16_boundedrand_r(struct pcg_state_16* rng,
                                        uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_unique_16_rxs_m_xs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t pcg_unique_32_rxs_m_xs_32_random_r(struct pcg_state_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_unique_32_step_r(rng);
    return pcg_output_rxs_m_xs_32_32(oldstate);
}

inline uint32_t
pcg_unique_32_rxs_m_xs_32_boundedrand_r(struct pcg_state_32* rng,
                                        uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_32_rxs_m_xs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint64_t pcg_unique_64_rxs_m_xs_64_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_rxs_m_xs_64_64(oldstate);
}

inline uint64_t
pcg_unique_64_rxs_m_xs_64_boundedrand_r(struct pcg_state_64* rng,
                                        uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_64_rxs_m_xs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline pcg128_t pcg_unique_128_rxs_m_xs_128_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_rxs_m_xs_128_128(rng->state);
}



inline pcg128_t
pcg_unique_128_rxs_m_xs_128_boundedrand_r(struct pcg_state_128* rng,
                                          pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_unique_128_rxs_m_xs_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint8_t pcg_setseq_8_rxs_m_xs_8_random_r(struct pcg_state_setseq_8* rng)
{
    uint8_t oldstate = rng->state;
    pcg_setseq_8_step_r(rng);
    return pcg_output_rxs_m_xs_8_8(oldstate);
}

inline uint8_t
pcg_setseq_8_rxs_m_xs_8_boundedrand_r(struct pcg_state_setseq_8* rng,
                                      uint8_t bound)
{
    uint8_t threshold = ((uint8_t)(-bound)) % bound;
    for (;;) {
        uint8_t r = pcg_setseq_8_rxs_m_xs_8_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint16_t
pcg_setseq_16_rxs_m_xs_16_random_r(struct pcg_state_setseq_16* rng)
{
    uint16_t oldstate = rng->state;
    pcg_setseq_16_step_r(rng);
    return pcg_output_rxs_m_xs_16_16(oldstate);
}

inline uint16_t
pcg_setseq_16_rxs_m_xs_16_boundedrand_r(struct pcg_state_setseq_16* rng,
                                        uint16_t bound)
{
    uint16_t threshold = ((uint16_t)(-bound)) % bound;
    for (;;) {
        uint16_t r = pcg_setseq_16_rxs_m_xs_16_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint32_t
pcg_setseq_32_rxs_m_xs_32_random_r(struct pcg_state_setseq_32* rng)
{
    uint32_t oldstate = rng->state;
    pcg_setseq_32_step_r(rng);
    return pcg_output_rxs_m_xs_32_32(oldstate);
}

inline uint32_t
pcg_setseq_32_rxs_m_xs_32_boundedrand_r(struct pcg_state_setseq_32* rng,
                                        uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_32_rxs_m_xs_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}

inline uint64_t
pcg_setseq_64_rxs_m_xs_64_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_rxs_m_xs_64_64(oldstate);
}

inline uint64_t
pcg_setseq_64_rxs_m_xs_64_boundedrand_r(struct pcg_state_setseq_64* rng,
                                        uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_64_rxs_m_xs_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline pcg128_t
pcg_setseq_128_rxs_m_xs_128_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_rxs_m_xs_128_128(rng->state);
}



inline pcg128_t
pcg_setseq_128_rxs_m_xs_128_boundedrand_r(struct pcg_state_setseq_128* rng,
                                          pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_setseq_128_rxs_m_xs_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}




inline uint32_t pcg_oneseq_64_xsl_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_xsl_rr_64_32(oldstate);
}

inline uint32_t pcg_oneseq_64_xsl_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_oneseq_64_xsl_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_oneseq_128_xsl_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_xsl_rr_128_64(rng->state);
}



inline uint64_t
pcg_oneseq_128_xsl_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_128_xsl_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint32_t pcg_unique_64_xsl_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_xsl_rr_64_32(oldstate);
}

inline uint32_t pcg_unique_64_xsl_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_unique_64_xsl_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_unique_128_xsl_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_xsl_rr_128_64(rng->state);
}



inline uint64_t
pcg_unique_128_xsl_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_128_xsl_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint32_t
pcg_setseq_64_xsl_rr_32_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_xsl_rr_64_32(oldstate);
}

inline uint32_t
pcg_setseq_64_xsl_rr_32_boundedrand_r(struct pcg_state_setseq_64* rng,
                                      uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_setseq_64_xsl_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t
pcg_setseq_128_xsl_rr_64_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_xsl_rr_128_64(rng->state);
}



inline uint64_t
pcg_setseq_128_xsl_rr_64_boundedrand_r(struct pcg_state_setseq_128* rng,
                                       uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_128_xsl_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint32_t pcg_mcg_64_xsl_rr_32_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_mcg_64_step_r(rng);
    return pcg_output_xsl_rr_64_32(oldstate);
}

inline uint32_t pcg_mcg_64_xsl_rr_32_boundedrand_r(struct pcg_state_64* rng,
                                                   uint32_t bound)
{
    uint32_t threshold = -bound % bound;
    for (;;) {
        uint32_t r = pcg_mcg_64_xsl_rr_32_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_mcg_128_xsl_rr_64_random_r(struct pcg_state_128* rng)
{
    pcg_mcg_128_step_r(rng);
    return pcg_output_xsl_rr_128_64(rng->state);
}



inline uint64_t pcg_mcg_128_xsl_rr_64_boundedrand_r(struct pcg_state_128* rng,
                                                    uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_mcg_128_xsl_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}




inline uint64_t pcg_oneseq_64_xsl_rr_rr_64_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_oneseq_64_step_r(rng);
    return pcg_output_xsl_rr_rr_64_64(oldstate);
}

inline uint64_t
pcg_oneseq_64_xsl_rr_rr_64_boundedrand_r(struct pcg_state_64* rng,
                                         uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_oneseq_64_xsl_rr_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline pcg128_t pcg_oneseq_128_xsl_rr_rr_128_random_r(struct pcg_state_128* rng)
{
    pcg_oneseq_128_step_r(rng);
    return pcg_output_xsl_rr_rr_128_128(rng->state);
}



inline pcg128_t
pcg_oneseq_128_xsl_rr_rr_128_boundedrand_r(struct pcg_state_128* rng,
                                           pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_oneseq_128_xsl_rr_rr_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t pcg_unique_64_xsl_rr_rr_64_random_r(struct pcg_state_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_unique_64_step_r(rng);
    return pcg_output_xsl_rr_rr_64_64(oldstate);
}

inline uint64_t
pcg_unique_64_xsl_rr_rr_64_boundedrand_r(struct pcg_state_64* rng,
                                         uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_unique_64_xsl_rr_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline pcg128_t pcg_unique_128_xsl_rr_rr_128_random_r(struct pcg_state_128* rng)
{
    pcg_unique_128_step_r(rng);
    return pcg_output_xsl_rr_rr_128_128(rng->state);
}



inline pcg128_t
pcg_unique_128_xsl_rr_rr_128_boundedrand_r(struct pcg_state_128* rng,
                                           pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_unique_128_xsl_rr_rr_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline uint64_t
pcg_setseq_64_xsl_rr_rr_64_random_r(struct pcg_state_setseq_64* rng)
{
    uint64_t oldstate = rng->state;
    pcg_setseq_64_step_r(rng);
    return pcg_output_xsl_rr_rr_64_64(oldstate);
}

inline uint64_t
pcg_setseq_64_xsl_rr_rr_64_boundedrand_r(struct pcg_state_setseq_64* rng,
                                         uint64_t bound)
{
    uint64_t threshold = -bound % bound;
    for (;;) {
        uint64_t r = pcg_setseq_64_xsl_rr_rr_64_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}


inline pcg128_t
pcg_setseq_128_xsl_rr_rr_128_random_r(struct pcg_state_setseq_128* rng)
{
    pcg_setseq_128_step_r(rng);
    return pcg_output_xsl_rr_rr_128_128(rng->state);
}



inline pcg128_t
pcg_setseq_128_xsl_rr_rr_128_boundedrand_r(struct pcg_state_setseq_128* rng,
                                           pcg128_t bound)
{
    pcg128_t threshold = -bound % bound;
    for (;;) {
        pcg128_t r = pcg_setseq_128_xsl_rr_rr_128_random_r(rng);
        if (r >= threshold)
            return r % bound;
    }
}



typedef struct pcg_state_setseq_64 pcg32_random_t;
typedef struct pcg_state_64 pcg32s_random_t;
typedef struct pcg_state_64 pcg32u_random_t;
typedef struct pcg_state_64 pcg32f_random_t;
# 2067 "pcg_variants.h"
typedef struct pcg_state_setseq_128 pcg64_random_t;
typedef struct pcg_state_128 pcg64s_random_t;
typedef struct pcg_state_128 pcg64u_random_t;
typedef struct pcg_state_128 pcg64f_random_t;
# 2094 "pcg_variants.h"
typedef struct pcg_state_8 pcg8si_random_t;
typedef struct pcg_state_16 pcg16si_random_t;
typedef struct pcg_state_32 pcg32si_random_t;
typedef struct pcg_state_64 pcg64si_random_t;
# 2120 "pcg_variants.h"
typedef struct pcg_state_128 pcg128si_random_t;







typedef struct pcg_state_setseq_8 pcg8i_random_t;
typedef struct pcg_state_setseq_16 pcg16i_random_t;
typedef struct pcg_state_setseq_32 pcg32i_random_t;
typedef struct pcg_state_setseq_64 pcg64i_random_t;
# 2154 "pcg_variants.h"
typedef struct pcg_state_setseq_128 pcg128i_random_t;






extern uint32_t pcg32_random();
extern uint32_t pcg32_boundedrand(uint32_t bound);
extern void pcg32_srandom(uint64_t seed, uint64_t seq);
extern void pcg32_advance(uint64_t delta);


extern uint64_t pcg64_random();
extern uint64_t pcg64_boundedrand(uint64_t bound);
extern void pcg64_srandom(pcg128_t seed, pcg128_t seq);
extern void pcg64_advance(pcg128_t delta);
# 27 "check-pcg32Test.c" 2
# 1 "check-base1.c" 1
# 24 "check-base1.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 35 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 47 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 3 4

# 209 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 48 "/usr/include/sys/cdefs.h" 2 3 4
# 36 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 1 3 4
# 143 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 415 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
# 426 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 3 4
} max_align_t;
# 37 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 41 "/usr/include/stdio.h" 2 3 4





typedef __gnuc_va_list va_list;
# 60 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/reent.h" 1 3 4
# 13 "/usr/include/sys/reent.h" 3 4
# 1 "/usr/include/_ansi.h" 1 3 4
# 14 "/usr/include/sys/reent.h" 2 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 1 3 4
# 15 "/usr/include/sys/reent.h" 2 3 4

# 1 "/usr/include/sys/_types.h" 1 3 4
# 24 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 1 3 4
# 350 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 25 "/usr/include/sys/_types.h" 2 3 4


# 1 "/usr/include/machine/_types.h" 1 3 4
# 9 "/usr/include/machine/_types.h" 3 4
typedef __int64_t __blkcnt_t;


typedef __int32_t __blksize_t;


typedef __uint32_t __dev_t;


typedef unsigned long __fsblkcnt_t;


typedef unsigned long __fsfilcnt_t;


typedef __uint32_t __uid_t;


typedef __uint32_t __gid_t;


typedef __uint64_t __ino_t;


typedef long long __key_t;


typedef __uint16_t __sa_family_t;



typedef int __socklen_t;
# 28 "/usr/include/sys/_types.h" 2 3 4
# 46 "/usr/include/sys/_types.h" 3 4
typedef long _off_t;





typedef int __pid_t;
# 67 "/usr/include/sys/_types.h" 3 4
typedef __uint32_t __id_t;
# 90 "/usr/include/sys/_types.h" 3 4
typedef __uint32_t __mode_t;





__extension__ typedef long long _off64_t;





typedef _off_t __off_t;


typedef _off64_t __loff_t;
# 116 "/usr/include/sys/_types.h" 3 4
typedef long _fpos_t;
# 131 "/usr/include/sys/_types.h" 3 4
typedef long unsigned int __size_t;
# 147 "/usr/include/sys/_types.h" 3 4
typedef long signed int _ssize_t;
# 158 "/usr/include/sys/_types.h" 3 4
typedef _ssize_t __ssize_t;



typedef struct
{
  int __count;
  union
  {
    wint_t __wch;
    unsigned char __wchb[4];
  } __value;
} _mbstate_t;




typedef void *_iconv_t;






typedef unsigned long __clock_t;






typedef long __time_t;





typedef unsigned long __clockid_t;


typedef long __daddr_t;



typedef unsigned long __timer_t;
# 212 "/usr/include/sys/_types.h" 3 4
typedef int __nl_item;
typedef unsigned short __nlink_t;
typedef long __suseconds_t;
typedef unsigned long __useconds_t;







typedef __builtin_va_list __va_list;
# 17 "/usr/include/sys/reent.h" 2 3 4
# 26 "/usr/include/sys/reent.h" 3 4
typedef unsigned int __ULong;
# 35 "/usr/include/sys/reent.h" 3 4
# 1 "/usr/include/sys/lock.h" 1 3 4
# 12 "/usr/include/sys/lock.h" 3 4
typedef void *_LOCK_T;
# 42 "/usr/include/sys/lock.h" 3 4
void __cygwin_lock_init(_LOCK_T *);
void __cygwin_lock_init_recursive(_LOCK_T *);
void __cygwin_lock_fini(_LOCK_T *);
void __cygwin_lock_lock(_LOCK_T *);
int __cygwin_lock_trylock(_LOCK_T *);
void __cygwin_lock_unlock(_LOCK_T *);
# 36 "/usr/include/sys/reent.h" 2 3 4
typedef _LOCK_T _flock_t;







struct _reent;

struct __locale_t;






struct _Bigint
{
  struct _Bigint *_next;
  int _k, _maxwds, _sign, _wds;
  __ULong _x[1];
};


struct __tm
{
  int __tm_sec;
  int __tm_min;
  int __tm_hour;
  int __tm_mday;
  int __tm_mon;
  int __tm_year;
  int __tm_wday;
  int __tm_yday;
  int __tm_isdst;
};







struct _on_exit_args {
 void * _fnargs[32];
 void * _dso_handle[32];

 __ULong _fntypes;


 __ULong _is_cxa;
};
# 99 "/usr/include/sys/reent.h" 3 4
struct _atexit {
 struct _atexit *_next;
 int _ind;

 void (*_fns[32])(void);
        struct _on_exit_args _on_exit_args;
};
# 116 "/usr/include/sys/reent.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};
# 222 "/usr/include/sys/reent.h" 3 4
struct __sFILE64 {
  unsigned char *_p;
  int _r;
  int _w;
  short _flags;
  short _file;
  struct __sbuf _bf;
  int _lbfsize;

  struct _reent *_data;


  void * _cookie;

  _ssize_t (*_read) (struct _reent *, void *,
        char *, size_t);
  _ssize_t (*_write) (struct _reent *, void *,
         const char *,
         size_t);
  _fpos_t (*_seek) (struct _reent *, void *, _fpos_t, int);
  int (*_close) (struct _reent *, void *);


  struct __sbuf _ub;
  unsigned char *_up;
  int _ur;


  unsigned char _ubuf[3];
  unsigned char _nbuf[1];


  struct __sbuf _lb;


  int _blksize;
  int _flags2;

  _off64_t _offset;
  _fpos_t (*_seek64) (struct _reent *, void *, _fpos_t, int);


  _flock_t _lock;

  _mbstate_t _mbstate;
};
typedef struct __sFILE64 __FILE;





extern __FILE __sf[3];

struct _glue
{
  struct _glue *_next;
  int _niobs;
  __FILE *_iobs;
};

extern struct _glue __sglue;
# 306 "/usr/include/sys/reent.h" 3 4
struct _rand48 {
  unsigned short _seed[3];
  unsigned short _mult[3];
  unsigned short _add;




};
# 568 "/usr/include/sys/reent.h" 3 4
struct _reent
{
  int _errno;




  __FILE *_stdin, *_stdout, *_stderr;

  int _inc;
  char _emergency[25];


  int _reserved_1;

  struct __locale_t *_locale;


  int _reserved_0;


  void (*__cleanup) (struct _reent *);


  struct _Bigint *_result;
  int _result_k;
  struct _Bigint *_p5s;
  struct _Bigint **_freelist;


  int _cvtlen;
  char *_cvtbuf;

  union
    {
      struct
        {

          unsigned int _reserved_2;

          char * _strtok_last;
          char _asctime_buf[26];
          struct __tm _localtime_buf;
          int _gamma_signgam;
          __extension__ unsigned long long _rand_next;
          struct _rand48 _r48;
          _mbstate_t _mblen_state;
          _mbstate_t _mbtowc_state;
          _mbstate_t _wctomb_state;
          char _l64a_buf[8];
          char _signal_buf[24];
          int _getdate_err;
          _mbstate_t _mbrlen_state;
          _mbstate_t _mbrtowc_state;
          _mbstate_t _mbsrtowcs_state;
          _mbstate_t _wcrtomb_state;
          _mbstate_t _wcsrtombs_state;
   int _h_errno;

          _mbstate_t _c8rtomb_state;
          _mbstate_t _c16rtomb_state;
          _mbstate_t _c32rtomb_state;
          _mbstate_t _mbrtoc8_state;
          _mbstate_t _mbrtoc16_state;
          _mbstate_t _mbrtoc32_state;

        } _reent;

      struct
        {
          unsigned char * _reserved_3[30];
          unsigned int _reserved_4[30];
        } _reserved_5;

    } _new;


  struct _atexit *_reserved_6;
  struct _atexit _reserved_7;



  void (**_sig_func)(int);
};
# 782 "/usr/include/sys/reent.h" 3 4
extern struct _reent *_impure_ptr ;





extern struct _reent _impure_data ;





  struct _reent * __getreent (void);
# 900 "/usr/include/sys/reent.h" 3 4
extern struct _atexit *__atexit;
extern struct _atexit __atexit0;

extern void (*__stdio_exit_handler) (void);

void _reclaim_reent (struct _reent *);

extern int _fwalk_sglue (struct _reent *, int (*)(struct _reent *, __FILE *),
    struct _glue *);
# 61 "/usr/include/stdio.h" 2 3 4





typedef __FILE FILE;



typedef _fpos_t fpos_t;





typedef __off_t off_t;




typedef _ssize_t ssize_t;



# 1 "/usr/include/sys/stdio.h" 1 3 4
# 33 "/usr/include/sys/stdio.h" 3 4


ssize_t getline (char **, size_t *, FILE *);
ssize_t getdelim (char **, size_t *, int, FILE *);


# 86 "/usr/include/stdio.h" 2 3 4
# 187 "/usr/include/stdio.h" 3 4
char * ctermid (char *);




FILE * tmpfile (void);
char * tmpnam (char *);

char * tempnam (const char *, const char *) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

int fclose (FILE *);
int fflush (FILE *);
FILE * freopen (const char *restrict, const char *restrict, FILE *restrict);
void setbuf (FILE *restrict, char *restrict);
int setvbuf (FILE *restrict, char *restrict, int, size_t);
int fprintf (FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fscanf (FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int printf (const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int scanf (const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int sscanf (const char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int vfprintf (FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int vsprintf (char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int fgetc (FILE *);
char * fgets (char *restrict, int, FILE *restrict);
int fputc (int, FILE *);
int fputs (const char *restrict, FILE *restrict);
int getc (FILE *);
int getchar (void);
char * gets (char *);
int putc (int, FILE *);
int putchar (int);
int puts (const char *);
int ungetc (int, FILE *);
size_t fread (void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t fwrite (const void *restrict , size_t _size, size_t _n, FILE *);



int fgetpos (FILE *restrict, fpos_t *restrict);

int fseek (FILE *, long, int);



int fsetpos (FILE *, const fpos_t *);

long ftell ( FILE *);
void rewind (FILE *);
void clearerr (FILE *);
int feof (FILE *);
int ferror (FILE *);
void perror (const char *);

FILE * fopen (const char *restrict _name, const char *restrict _type);
int sprintf (char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int remove (const char *);
int rename (const char *, const char *);
# 263 "/usr/include/stdio.h" 3 4
int fseeko (FILE *, off_t, int);
off_t ftello (FILE *);







int snprintf (char *restrict, size_t, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vsnprintf (char *restrict, size_t, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vfscanf (FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsscanf (const char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
# 290 "/usr/include/stdio.h" 3 4
int asiprintf (char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
char * asniprintf (char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * asnprintf (char *restrict, size_t *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));

int diprintf (int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

int fiprintf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int fiscanf (FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int iprintf (const char *, ...)
               __attribute__ ((__format__ (__printf__, 1, 2)));
int iscanf (const char *, ...)
               __attribute__ ((__format__ (__scanf__, 1, 2)));
int siprintf (char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int siscanf (const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int sniprintf (char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int vasiprintf (char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
char * vasniprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * vasnprintf (char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int vdiprintf (int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiprintf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vfiscanf (FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int viprintf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 1, 0)));
int viscanf (const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 1, 0)));
int vsiprintf (char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int vsiscanf (const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int vsniprintf (char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
# 345 "/usr/include/stdio.h" 3 4
FILE * fdopen (int, const char *);

int fileno (FILE *);


int pclose (FILE *);
FILE * popen (const char *, const char *);



void setbuffer (FILE *, char *, int);
int setlinebuf (FILE *);



int getw (FILE *);
int putw (int, FILE *);


int getc_unlocked (FILE *);
int getchar_unlocked (void);
void flockfile (FILE *);
int ftrylockfile (FILE *);
void funlockfile (FILE *);
int putc_unlocked (int, FILE *);
int putchar_unlocked (int);
# 380 "/usr/include/stdio.h" 3 4
int dprintf (int, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));

FILE * fmemopen (void *restrict, size_t, const char *restrict);


FILE * open_memstream (char **, size_t *);
int vdprintf (int, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));



int renameat (int, const char *, int, const char *);

int renameat2 (int, const char *, int, const char *, unsigned int);







int _asiprintf_r (struct _reent *, char **, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
char * _asniprintf_r (struct _reent *, char *, size_t *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
char * _asnprintf_r (struct _reent *, char *restrict, size_t *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _asprintf_r (struct _reent *, char **restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _diprintf_r (struct _reent *, int, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _dprintf_r (struct _reent *, int, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fclose_r (struct _reent *, FILE *);
int _fcloseall_r (struct _reent *);
FILE * _fdopen_r (struct _reent *, int, const char *);
int _fflush_r (struct _reent *, FILE *);
int _fgetc_r (struct _reent *, FILE *);
int _fgetc_unlocked_r (struct _reent *, FILE *);
char * _fgets_r (struct _reent *, char *restrict, int, FILE *restrict);
char * _fgets_unlocked_r (struct _reent *, char *restrict, int, FILE *restrict);




int _fgetpos_r (struct _reent *, FILE *, fpos_t *);
int _fsetpos_r (struct _reent *, FILE *, const fpos_t *);

int _fiprintf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fiscanf_r (struct _reent *, FILE *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
FILE * _fmemopen_r (struct _reent *, void *restrict, size_t, const char *restrict);
FILE * _fopen_r (struct _reent *, const char *restrict, const char *restrict);
FILE * _freopen_r (struct _reent *, const char *restrict, const char *restrict, FILE *restrict);
int _fprintf_r (struct _reent *, FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _fpurge_r (struct _reent *, FILE *);
int _fputc_r (struct _reent *, int, FILE *);
int _fputc_unlocked_r (struct _reent *, int, FILE *);
int _fputs_r (struct _reent *, const char *restrict, FILE *restrict);
int _fputs_unlocked_r (struct _reent *, const char *restrict, FILE *restrict);
size_t _fread_r (struct _reent *, void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t _fread_unlocked_r (struct _reent *, void *restrict, size_t _size, size_t _n, FILE *restrict);
int _fscanf_r (struct _reent *, FILE *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _fseek_r (struct _reent *, FILE *, long, int);
int _fseeko_r (struct _reent *, FILE *, _off_t, int);
long _ftell_r (struct _reent *, FILE *);
_off_t _ftello_r (struct _reent *, FILE *);
void _rewind_r (struct _reent *, FILE *);
size_t _fwrite_r (struct _reent *, const void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t _fwrite_unlocked_r (struct _reent *, const void *restrict, size_t _size, size_t _n, FILE *restrict);
int _getc_r (struct _reent *, FILE *);
int _getc_unlocked_r (struct _reent *, FILE *);
int _getchar_r (struct _reent *);
int _getchar_unlocked_r (struct _reent *);
char * _gets_r (struct _reent *, char *);
int _iprintf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _iscanf_r (struct _reent *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
FILE * _open_memstream_r (struct _reent *, char **, size_t *);
void _perror_r (struct _reent *, const char *);
int _printf_r (struct _reent *, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 2, 3)));
int _putc_r (struct _reent *, int, FILE *);
int _putc_unlocked_r (struct _reent *, int, FILE *);
int _putchar_unlocked_r (struct _reent *, int);
int _putchar_r (struct _reent *, int);
int _puts_r (struct _reent *, const char *);
int _remove_r (struct _reent *, const char *);
int _rename_r (struct _reent *,
      const char *_old, const char *_new);
int _scanf_r (struct _reent *, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 2, 3)));
int _siprintf_r (struct _reent *, char *, const char *, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _siscanf_r (struct _reent *, const char *, const char *, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
int _sniprintf_r (struct _reent *, char *, size_t, const char *, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _snprintf_r (struct _reent *, char *restrict, size_t, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 4, 5)));
int _sprintf_r (struct _reent *, char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__printf__, 3, 4)));
int _sscanf_r (struct _reent *, const char *restrict, const char *restrict, ...)
               __attribute__ ((__format__ (__scanf__, 3, 4)));
char * _tempnam_r (struct _reent *, const char *, const char *);
FILE * _tmpfile_r (struct _reent *);
char * _tmpnam_r (struct _reent *, char *);
int _ungetc_r (struct _reent *, int, FILE *);
int _vasiprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
char * _vasniprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
char * _vasnprintf_r (struct _reent*, char *, size_t *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vasprintf_r (struct _reent *, char **, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdiprintf_r (struct _reent *, int, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vdprintf_r (struct _reent *, int, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiprintf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfiscanf_r (struct _reent *, FILE *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vfprintf_r (struct _reent *, FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vfscanf_r (struct _reent *, FILE *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _viprintf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _viscanf_r (struct _reent *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vprintf_r (struct _reent *, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 2, 0)));
int _vscanf_r (struct _reent *, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 2, 0)));
int _vsiprintf_r (struct _reent *, char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsiscanf_r (struct _reent *, const char *, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));
int _vsniprintf_r (struct _reent *, char *, size_t, const char *, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsnprintf_r (struct _reent *, char *restrict, size_t, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 4, 0)));
int _vsprintf_r (struct _reent *, char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__printf__, 3, 0)));
int _vsscanf_r (struct _reent *, const char *restrict, const char *restrict, __gnuc_va_list)
               __attribute__ ((__format__ (__scanf__, 3, 0)));



int fpurge (FILE *);
ssize_t __getdelim (char **, size_t *, int, FILE *);
ssize_t __getline (char **, size_t *, FILE *);


void clearerr_unlocked (FILE *);
int feof_unlocked (FILE *);
int ferror_unlocked (FILE *);
int fileno_unlocked (FILE *);
int fflush_unlocked (FILE *);
int fgetc_unlocked (FILE *);
int fputc_unlocked (int, FILE *);
size_t fread_unlocked (void *restrict, size_t _size, size_t _n, FILE *restrict);
size_t fwrite_unlocked (const void *restrict , size_t _size, size_t _n, FILE *);
# 583 "/usr/include/stdio.h" 3 4
int __srget_r (struct _reent *, FILE *);
int __swbuf_r (struct _reent *, int, FILE *);
# 607 "/usr/include/stdio.h" 3 4
FILE *funopen (const void *__cookie,
  int (*__readfn)(void *__cookie, char *__buf,
    size_t __n),
  int (*__writefn)(void *__cookie, const char *__buf,
     size_t __n),
  fpos_t (*__seekfn)(void *__cookie, fpos_t __off, int __whence),
  int (*__closefn)(void *__cookie));
FILE *_funopen_r (struct _reent *, const void *__cookie,
  int (*__readfn)(void *__cookie, char *__buf,
    size_t __n),
  int (*__writefn)(void *__cookie, const char *__buf,
     size_t __n),
  fpos_t (*__seekfn)(void *__cookie, fpos_t __off, int __whence),
  int (*__closefn)(void *__cookie));
# 671 "/usr/include/stdio.h" 3 4
static __inline__ int __sgetc_r(struct _reent *__ptr, FILE *__p);

static __inline__ int __sgetc_r(struct _reent *__ptr, FILE *__p)
  {
    int __c = (--(__p)->_r < 0 ? __srget_r(__ptr, __p) : (int)(*(__p)->_p++));
    if ((__p->_flags & 0x4000) && (__c == '\r'))
      {
      int __c2 = (--(__p)->_r < 0 ? __srget_r(__ptr, __p) : (int)(*(__p)->_p++));
      if (__c2 == '\n')
        __c = __c2;
      else
        ungetc(__c2, __p);
      }
    return __c;
  }





static __inline__ int __sputc_r(struct _reent *_ptr, int _c, FILE *_p) {

 if ((_p->_flags & 0x4000) && _c == '\n')
   __sputc_r (_ptr, '\r', _p);

 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf_r(_ptr, _c, _p));
}
# 745 "/usr/include/stdio.h" 3 4
static __inline int
_getchar_unlocked(void)
{
 struct _reent *_ptr;

 _ptr = (__getreent());
 return (__sgetc_r(_ptr, ((_ptr)->_stdin)));
}

static __inline int
_putchar_unlocked(int _c)
{
 struct _reent *_ptr;

 _ptr = (__getreent());
 return (__sputc_r(_ptr, _c, ((_ptr)->_stdout)));
}
# 801 "/usr/include/stdio.h" 3 4

# 25 "check-base1.c" 2
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 1 3 4
# 26 "check-base1.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 10 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/machine/ieeefp.h" 1 3 4
# 11 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 1 3 4
# 17 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/machine/stdlib.h" 1 3 4
# 15 "/usr/include/machine/stdlib.h" 3 4
char *mkdtemp (char *);
# 21 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 23 "/usr/include/stdlib.h" 2 3 4



# 1 "/usr/include/cygwin/stdlib.h" 1 3 4
# 13 "/usr/include/cygwin/stdlib.h" 3 4
# 1 "/usr/include/cygwin/wait.h" 1 3 4
# 14 "/usr/include/cygwin/stdlib.h" 2 3 4






const char *getprogname (void);
void setprogname (const char *);





int unsetenv (const char *);


int clearenv (void);
# 51 "/usr/include/cygwin/stdlib.h" 3 4
extern void *memalign (size_t, size_t);

extern void *valloc (size_t);
# 84 "/usr/include/cygwin/stdlib.h" 3 4
int getloadavg(double loadavg[], int nelem);
# 27 "/usr/include/stdlib.h" 2 3 4








typedef struct
{
  int quot;
  int rem;
} div_t;

typedef struct
{
  long quot;
  long rem;
} ldiv_t;


typedef struct
{
  long long int quot;
  long long int rem;
} lldiv_t;




typedef int (*__compar_fn_t) (const void *, const void *);







int __locale_mb_cur_max (void);



void abort (void) __attribute__ ((__noreturn__));
int abs (int);

__uint32_t arc4random (void);
__uint32_t arc4random_uniform (__uint32_t);
void arc4random_buf (void *, size_t);

int atexit (void (*__func)(void));
double atof (const char *__nptr);

float atoff (const char *__nptr);

int atoi (const char *__nptr);
int _atoi_r (struct _reent *, const char *__nptr);
long atol (const char *__nptr);
long _atol_r (struct _reent *, const char *__nptr);
void * bsearch (const void *__key,
         const void *__base,
         size_t __nmemb,
         size_t __size,
         __compar_fn_t _compar);
void *calloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__))
      __attribute__((__alloc_size__(1, 2))) ;
div_t div (int __numer, int __denom);
void exit (int __status) __attribute__ ((__noreturn__));
void free (void *) ;
char * getenv (const char *__string);
char * _getenv_r (struct _reent *, const char *__string);



char * _findenv (const char *, int *);
char * _findenv_r (struct _reent *, const char *, int *);

extern char *suboptarg;
int getsubopt (char **, char * const *, char **);

long labs (long);
ldiv_t ldiv (long __numer, long __denom);
void *malloc(size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(1))) ;
int mblen (const char *, size_t);
int _mblen_r (struct _reent *, const char *, size_t, _mbstate_t *);
int mbtowc (wchar_t *restrict, const char *restrict, size_t);
int _mbtowc_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
int wctomb (char *, wchar_t);
int _wctomb_r (struct _reent *, char *, wchar_t, _mbstate_t *);
size_t mbstowcs (wchar_t *restrict, const char *restrict, size_t);
size_t _mbstowcs_r (struct _reent *, wchar_t *restrict, const char *restrict, size_t, _mbstate_t *);
size_t wcstombs (char *restrict, const wchar_t *restrict, size_t);
size_t _wcstombs_r (struct _reent *, char *restrict, const wchar_t *restrict, size_t, _mbstate_t *);


char * mkdtemp (char *);






int mkstemp (char *);


int mkstemps (char *, int);


char * mktemp (char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));


char * _mkdtemp_r (struct _reent *, char *);
int _mkostemp_r (struct _reent *, char *, int);
int _mkostemps_r (struct _reent *, char *, int, int);
int _mkstemp_r (struct _reent *, char *);
int _mkstemps_r (struct _reent *, char *, int);
char * _mktemp_r (struct _reent *, char *) __attribute__ ((__deprecated__("the use of `mktemp' is dangerous; use `mkstemp' instead")));
void qsort (void *__base, size_t __nmemb, size_t __size, __compar_fn_t _compar);
int rand (void);
void *realloc(void *, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2))) ;

void *reallocarray(void *, size_t, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2, 3)));
void *reallocf(void *, size_t) __attribute__((__warn_unused_result__)) __attribute__((__alloc_size__(2)));


char * realpath (const char *restrict path, char *restrict resolved_path);


int rpmatch (const char *response);




void srand (unsigned __seed);
double strtod (const char *restrict __n, char **restrict __end_PTR);
double _strtod_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR);

float strtof (const char *restrict __n, char **restrict __end_PTR);







long strtol (const char *restrict __n, char **restrict __end_PTR, int __base);
long _strtol_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long strtoul (const char *restrict __n, char **restrict __end_PTR, int __base);
unsigned long _strtoul_r (struct _reent *,const char *restrict __n, char **restrict __end_PTR, int __base);
# 191 "/usr/include/stdlib.h" 3 4
int system (const char *__string);


long a64l (const char *__input);
char * l64a (long __input);
char * _l64a_r (struct _reent *,long __input);


int on_exit (void (*__func)(int, void *),void *__arg);


void _Exit (int __status) __attribute__ ((__noreturn__));


int putenv (char *__string);

int _putenv_r (struct _reent *, char *__string);
void * _reallocf_r (struct _reent *, void *, size_t);

int setenv (const char *__string, const char *__value, int __overwrite);

int _setenv_r (struct _reent *, const char *__string, const char *__value, int __overwrite);
# 233 "/usr/include/stdlib.h" 3 4
int rand_r (unsigned *__seed);



double drand48 (void);
double _drand48_r (struct _reent *);
double erand48 (unsigned short [3]);
double _erand48_r (struct _reent *, unsigned short [3]);
long jrand48 (unsigned short [3]);
long _jrand48_r (struct _reent *, unsigned short [3]);
void lcong48 (unsigned short [7]);
void _lcong48_r (struct _reent *, unsigned short [7]);
long lrand48 (void);
long _lrand48_r (struct _reent *);
long mrand48 (void);
long _mrand48_r (struct _reent *);
long nrand48 (unsigned short [3]);
long _nrand48_r (struct _reent *, unsigned short [3]);
unsigned short *
       seed48 (unsigned short [3]);
unsigned short *
       _seed48_r (struct _reent *, unsigned short [3]);
void srand48 (long);
void _srand48_r (struct _reent *, long);


char * initstate (unsigned, char *, size_t);
long random (void);
char * setstate (char *);
void srandom (unsigned);


long long atoll (const char *__nptr);

long long _atoll_r (struct _reent *, const char *__nptr);

long long llabs (long long);
lldiv_t lldiv (long long __numer, long long __denom);
long long strtoll (const char *restrict __n, char **restrict __end_PTR, int __base);

long long _strtoll_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long strtoull (const char *restrict __n, char **restrict __end_PTR, int __base);

unsigned long long _strtoull_r (struct _reent *, const char *restrict __n, char **restrict __end_PTR, int __base);
# 290 "/usr/include/stdlib.h" 3 4
int posix_memalign (void **, size_t, size_t) __attribute__((__nonnull__ (1)))
     __attribute__((__warn_unused_result__));


char * _dtoa_r (struct _reent *, double, int, int, int *, int*, char**);







int _system_r (struct _reent *, const char *);

void __eprintf (const char *, const char *, unsigned int, const char *);
# 314 "/usr/include/stdlib.h" 3 4
void qsort_r (void *__base, size_t __nmemb, size_t __size, void *__thunk, int (*_compar)(void *, const void *, const void *))
             __asm__ ("" "__bsd_qsort_r");
# 324 "/usr/include/stdlib.h" 3 4
extern long double _strtold_r (struct _reent *, const char *restrict, char **restrict);

extern long double strtold (const char *restrict, char **restrict);







void * aligned_alloc(size_t, size_t) __attribute__((__malloc__)) __attribute__((__alloc_align__(1)))
     __attribute__((__alloc_size__(2))) __attribute__((__warn_unused_result__));
int at_quick_exit(void (*)(void));
_Noreturn void
 quick_exit(int);



# 27 "check-base1.c" 2

# 1 "/usr/include/string.h" 1 3 4
# 17 "/usr/include/string.h" 3 4
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stddef.h" 1 3 4
# 18 "/usr/include/string.h" 2 3 4






# 1 "/usr/include/strings.h" 1 3 4
# 44 "/usr/include/strings.h" 3 4


int bcmp(const void *, const void *, size_t) __attribute__((__pure__));
void bcopy(const void *, void *, size_t);
void bzero(void *, size_t);


void explicit_bzero(void *, size_t);


int ffs(int) __attribute__((__const__));


int ffsl(long) __attribute__((__const__));
int ffsll(long long) __attribute__((__const__));
int fls(int) __attribute__((__const__));
int flsl(long) __attribute__((__const__));
int flsll(long long) __attribute__((__const__));


char *index(const char *, int) __attribute__((__pure__));
char *rindex(const char *, int) __attribute__((__pure__));

int strcasecmp(const char *, const char *) __attribute__((__pure__));
int strncasecmp(const char *, const char *, size_t) __attribute__((__pure__));


int strcasecmp_l (const char *, const char *, locale_t);
int strncasecmp_l (const char *, const char *, size_t, locale_t);


# 25 "/usr/include/string.h" 2 3 4




void * memchr (const void *, int, size_t);
int memcmp (const void *, const void *, size_t);
void * memcpy (void *restrict, const void *restrict, size_t);
void * memmove (void *, const void *, size_t);
void * memset (void *, int, size_t);
char *strcat (char *restrict, const char *restrict);
char *strchr (const char *, int);
int strcmp (const char *, const char *);
int strcoll (const char *, const char *);
char *strcpy (char *restrict, const char *restrict);
size_t strcspn (const char *, const char *);
char *strerror (int);
size_t strlen (const char *);
char *strncat (char *restrict, const char *restrict, size_t);
int strncmp (const char *, const char *, size_t);
char *strncpy (char *restrict, const char *restrict, size_t);
char *strpbrk (const char *, const char *);
char *strrchr (const char *, int);
size_t strspn (const char *, const char *);
char *strstr (const char *, const char *);

char *strtok (char *restrict, const char *restrict);

size_t strxfrm (char *restrict, const char *restrict, size_t);


int strcoll_l (const char *, const char *, locale_t);
char *strerror_l (int, locale_t);
size_t strxfrm_l (char *restrict, const char *restrict, size_t, locale_t);


char *strtok_r (char *restrict, const char *restrict, char **restrict);


int timingsafe_bcmp (const void *, const void *, size_t);
int timingsafe_memcmp (const void *, const void *, size_t);


void * memccpy (void *restrict, const void *restrict, int, size_t);
# 76 "/usr/include/string.h" 3 4
char *stpcpy (char *restrict, const char *restrict);
char *stpncpy (char *restrict, const char *restrict, size_t);






char *strdup (const char *) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strdup_r (struct _reent *, const char *);

char *strndup (const char *, size_t) __attribute__((__malloc__)) __attribute__((__warn_unused_result__));

char *_strndup_r (struct _reent *, const char *, size_t);
# 100 "/usr/include/string.h" 3 4
int strerror_r (int, char *, size_t)

             __asm__ ("" "__xpg_strerror_r")

  ;







char * _strerror_r (struct _reent *, int, int, int *);


size_t strlcat (char *, const char *, size_t);
size_t strlcpy (char *, const char *, size_t);


size_t strnlen (const char *, size_t);


char *strsep (char **, const char *);


char *strnstr(const char *, const char *, size_t) __attribute__((__pure__));



char *strlwr (char *);
char *strupr (char *);



char *strsignal (int __signo);



int strtosigno (const char *__name);
# 175 "/usr/include/string.h" 3 4
# 1 "/usr/include/sys/string.h" 1 3 4
# 176 "/usr/include/string.h" 2 3 4


# 29 "check-base1.c" 2

# 1 "entropy.h" 1
# 27 "entropy.h"
# 1 "/usr/lib/gcc/x86_64-pc-cygwin/11/include/stdbool.h" 1 3 4
# 28 "entropy.h" 2






# 33 "entropy.h"
extern
# 33 "entropy.h" 3 4
      _Bool
# 33 "entropy.h"
           entropy_getbytes(void* dest, size_t size);
extern void fallback_entropy_getbytes(void* dest, size_t size);
# 31 "check-base1.c" 2



int main(int argc, char** argv)
{


    int rounds = 1;

# 39 "check-base1.c" 3 4
   _Bool
# 39 "check-base1.c"
        nondeterministic_seed =
# 39 "check-base1.c" 3 4
                                0
# 39 "check-base1.c"
                                     ;

    ++argv; --argc;
    if (argc > 0 && strcmp(argv[0], "-r") == 0) {
         nondeterministic_seed =
# 43 "check-base1.c" 3 4
                                0
# 43 "check-base1.c"
                                     ;
         ++argv; --argc;
    }
    if (argc > 0) {
         rounds = atoi(argv[0]);
    }




    pcg32s_random_t rng;
# 64 "check-base1.c"
    if (nondeterministic_seed) {


    } else {


        pcg_oneseq_64_srandom_r(&rng, 42u);
    }

    printf("pcg32s_random_r:\n" "      -  result:      32-bit unsigned int (uint32_t)\n" "      -  period:      2^64\n" "      -  state type:  pcg32s_random_t (%zu bytes)\n" "      -  output func: XSH-RR\n" "\n", sizeof(pcg32s_random_t));


    FILE *file;


    file = fopen("output1.txt", "w");


    if (file ==
# 82 "check-base1.c" 3 4
               ((void *)0)
# 82 "check-base1.c"
                   ) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int round = 1; round <= rounds; ++round) {
        for (int i = 0; i < 50000000; ++i) {
            fprintf(file, "%d\n", pcg_oneseq_64_xsh_rr_32_random_r(&rng));
        }

        pcg_oneseq_64_advance_r(&rng, -50000000);



        printf("\n");
    }

    fclose(file);

    return 0;
}
# 28 "check-pcg32Test.c" 2
