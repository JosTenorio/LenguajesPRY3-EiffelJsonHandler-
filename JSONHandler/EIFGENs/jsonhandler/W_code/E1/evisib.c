#include "eif_eiffel.h"
#include "eif_cecil.h"

#ifdef __cplusplus
extern "C" {
#endif

static char * type_key [] = {
(char *) 0,
"NATURAL_64_REF",
(char *) 0,
"NATURAL_16",
"STRING_8_SEARCHER",
"DISPENSER",
"FUNCTION",
(char *) 0,
(char *) 0,
"PRECONDITION_VIOLATION",
"STRING_32",
"RT_DBG_LOCAL_RECORD",
"NATURAL_8",
"ARRAY_ITERATION_CURSOR",
"ACTIVE",
"STRING_8",
"EXCEPTION",
"ARRAY",
(char *) 0,
"BAG",
"NATURAL_32_REF",
(char *) 0,
"MACHINE_EXCEPTION",
"IMMUTABLE_STRING_32",
(char *) 0,
"EXCEPTIONS",
"RAW_FILE",
(char *) 0,
"SYS_EXCEPTION",
"READABLE_STRING_8",
(char *) 0,
(char *) 0,
"INTEGER_32_REF",
(char *) 0,
(char *) 0,
"DYNAMIC_CHAIN",
(char *) 0,
"STRING_GENERAL",
"CHECK_VIOLATION",
"SPECIAL",
"IMMUTABLE_STRING_GENERAL",
"READABLE_STRING_32",
"ROUTINE_FAILURE",
"CONSOLE",
"OBJECT_GRAPH_BREADTH_FIRST_TRAVERSABLE",
"READABLE_STRING_GENERAL",
"ANY",
"BAD_INSPECT_VALUE",
"DOUBLE_MATH",
"STRING_32_ITERATION_CURSOR",
"PATH",
"EIFFEL_RUNTIME_EXCEPTION",
(char *) 0,
"ENCODING_IMP",
"EXCEPTION_MANAGER",
"INTEGER_32",
"NO_MORE_MEMORY",
"ARRAYED_QUEUE_ITERATION_CURSOR",
"RT_DBG_COMMON",
"NATURAL_32",
(char *) 0,
"FILE_INFO",
"STRING_HANDLER",
"COM_FAILURE",
"ADDRESS_APPLIED_TO_MELTED_FEATURE",
"LINKED_LIST_ITERATION_CURSOR",
"TYPED_POINTER",
(char *) 0,
"DEBUG_OUTPUT",
"ISE_RUNTIME",
(char *) 0,
(char *) 0,
(char *) 0,
"PLATFORM",
(char *) 0,
"POINTER_REF",
"VERSIONABLE",
(char *) 0,
(char *) 0,
"IMMUTABLE_STRING_8",
"HARDWARE_EXCEPTION",
(char *) 0,
"REFLECTOR_CONSTANTS",
"POSTCONDITION_VIOLATION",
"STD_FILES",
"OBSOLETE_EXCEPTION",
"TYPE",
"SYSTEM_STRING_FACTORY",
"REFLECTOR_HELPER",
(char *) 0,
"ISE_EXCEPTION_MANAGER",
"RT_DBG_ATTRIBUTE_RECORD",
"PRIMES",
"C_STRING",
"FILE",
"BOOLEAN",
"ENCODING",
"DYNAMIC_TABLE",
"IO_FAILURE",
"NATURAL_64",
(char *) 0,
"REFLECTED_REFERENCE_OBJECT",
(char *) 0,
(char *) 0,
(char *) 0,
"PREDICATE",
"OLD_VIOLATION",
(char *) 0,
"LINKED_LIST",
(char *) 0,
(char *) 0,
"EXCEP_CONST",
"CHARACTER_PROPERTY",
"HASH_TABLE_CURSOR",
"ARGUMENTS_32",
"OPERATING_SYSTEM_EXCEPTION",
(char *) 0,
"RT_DBG_VALUE_RECORD",
"STRING_TABLE",
"RT_DBG_INTERNAL",
"SYSTEM_STRING",
(char *) 0,
"INTEGER_64_REF",
"TABLE_ITERATION_CURSOR",
"HASH_TABLE_ITERATION_CURSOR",
"INFINITE",
"STRING_TO_REAL_CONVERTOR",
"EIFFEL_RUNTIME_PANIC",
"INTEGER_8",
"LOOP_INVARIANT_VIOLATION",
"LANGUAGE_EXCEPTION",
"TYPED_INDEXABLE_ITERATION_CURSOR",
(char *) 0,
"UNICODE_CONVERSION",
"DYNAMIC_LIST",
"REAL_32_REF",
"LINEAR",
"VOID_ASSIGNED_TO_EXPANDED",
"LINKABLE",
"ENCODING_HELPER",
"INTEGER_16",
"ENCODING_I",
"ABSTRACT_SPECIAL",
"COUNTABLE",
(char *) 0,
(char *) 0,
"TABLE",
"FLOATING_POINT_FAILURE",
(char *) 0,
"UTF_CONVERTER",
"NATIVE_STRING",
"NATIVE_STRING_HANDLER",
"SYSTEM_ENCODINGS_I",
(char *) 0,
"QUEUE",
"ASSERTION_VIOLATION",
"OBJECT_GRAPH_TRAVERSABLE",
(char *) 0,
"SYSTEM_ENCODINGS",
"ITERATION_CURSOR",
"SET",
"REAL_64",
(char *) 0,
"FILE_ITERATION_CURSOR",
"INDEXABLE_ITERATION_CURSOR",
"HASH_TABLE",
"REAL_64_REF",
"MATH_CONST",
"NATURAL_16_REF",
"OPERATING_SYSTEM_SIGNAL_FAILURE",
"STRING_ITERATION_CURSOR",
"COLLECTION",
"SERIALIZATION_FAILURE",
"RESIZABLE",
"INTEGER_INTERVAL",
(char *) 0,
"STRING_32_SEARCHER",
"CURSOR",
(char *) 0,
"REFLECTED_OBJECT",
"INTEGER_16_REF",
"REFLECTOR",
"EIFFELSTUDIO_SPECIFIC_LANGUAGE_EXCEPTION",
"INTERNAL",
"BOUNDED",
"TABLE_ITERABLE",
"POINTER",
(char *) 0,
(char *) 0,
"TUPLE",
(char *) 0,
"TO_SPECIAL",
(char *) 0,
"CONTAINER",
"NUMERIC",
"EIF_EXCEPTION",
(char *) 0,
"PROCEDURE",
"OBJECT_GRAPH_MARKER",
(char *) 0,
"DATA_EXCEPTION",
"FINITE",
"INTEGER_8_REF",
"UNBOUNDED",
"RT_EXTENSION_COMMON",
"BOX",
"UNIX_FILE_INFO",
"RT_DBG_EXECUTION_PARAMETERS",
"REFLECTED_COPY_SEMANTICS_OBJECT",
"CREATE_ON_DEFERRED",
"COUNTABLE_SEQUENCE",
"DEVELOPER_EXCEPTION",
"PART_COMPARABLE",
"RT_DBG_EXECUTION_RECORDER",
"BOOLEAN_REF",
"MISMATCH_FAILURE",
"INDEXABLE",
"INVARIANT_VIOLATION",
"GENERAL_SPECIAL_ITERATION_CURSOR",
"ARGUMENTS",
(char *) 0,
"ARRAYED_LIST_ITERATION_CURSOR",
"VOID_TARGET",
"NATIVE_ARRAY",
"REFACTORING_HELPER",
"RT_EXTENSION",
"MISMATCH_CORRECTOR",
"CHAIN",
"IO_MEDIUM",
"NATURAL_8_REF",
"HASHABLE",
"INTEGER_OVERFLOW_CHECKER",
"REAL_32",
"SEQUENCE",
"OPERATING_ENVIRONMENT",
"RT_DBG_CALL_RECORD",
(char *) 0,
"RESUMPTION_FAILURE",
"ROUTINE",
"INTEGER_64",
"ARRAYED_LIST",
(char *) 0,
"STRING_8_ITERATION_CURSOR",
"COMPARABLE",
(char *) 0,
(char *) 0,
"CHARACTER_32_REF",
"READABLE_INDEXABLE",
"STRING_TO_INTEGER_CONVERTOR",
"TRAVERSABLE",
(char *) 0,
"RT_DBG_FIELD_RECORD",
"LINKED_LIST_CURSOR",
"STRING_SEARCHER",
"EXECUTION_ENVIRONMENT",
"RT_EXTENSION_GENERAL",
"APPLICATION",
"CODE_PAGE_CONSTANTS",
"EXCEPTION_IN_SIGNAL_HANDLER_FAILURE",
"ARRAYED_LIST_CURSOR",
"ARRAYED_QUEUE",
"VARIANT_VIOLATION",
(char *) 0,
"RESCUE_FAILURE",
"SYSTEM_ENCODINGS_IMP",
(char *) 0,
"MANAGED_POINTER",
"CHARACTER_8_REF",
"EXCEPTION_MANAGER_FACTORY",
(char *) 0,
"HEXADECIMAL_STRING_TO_INTEGER_CONVERTER",
"CHARACTER_32",
"CHARACTER_8",
"OPERATING_SYSTEM_FAILURE",
"NUMERIC_INFORMATION",
"LIST",
"EXTERNAL_FAILURE",
(char *) 0,
"ITERABLE",
(char *) 0,
"CURSOR_STRUCTURE",
"BILINEAR",
"READABLE_INDEXABLE_ITERATION_CURSOR",
(char *) 0,
(char *) 0,
"PLAIN_TEXT_FILE",
"STRING_TO_NUMERIC_CONVERTOR",
"CELL",
"DISPOSABLE",
"MISMATCH_INFORMATION",
"SPECIAL_ITERATION_CURSOR",
(char *) 0,
"CODE_PAGES",
};

static uint32 patterns231 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types231 [] = {
544,
};

static uint32 patterns9 [] = {
SK_REF,
SK_BOOL,
SK_REF,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types9 [] = {
209,
667,
};

static uint32 patterns206 [] = {
SK_BOOL,
SK_CHAR32,
SK_INT32,
SK_INT64,
SK_INT16,
SK_UINT32,
SK_UINT64,
SK_UINT8,
SK_UINT16,
SK_CHAR8,
SK_INT8,
SK_REF,
SK_REAL32,
SK_POINTER,
SK_REAL64,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types206 [] = {
546,
550,
554,
558,
562,
566,
567,
571,
575,
619,
623,
640,
641,
650,
668,
};

static uint32 patterns49 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types49 [] = {
223,
252,
288,
320,
357,
393,
429,
465,
501,
590,
673,
714,
};

static uint32 patterns190 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types190 [] = {
206,
258,
294,
336,
373,
409,
445,
481,
517,
596,
689,
730,
};

static uint32 patterns5 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types5 [] = {
222,
251,
287,
319,
356,
392,
428,
464,
500,
589,
672,
713,
};

static uint32 patterns195 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types195 [] = {
207,
259,
295,
337,
374,
410,
446,
482,
518,
597,
690,
731,
};

static uint32 patterns194 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types194 [] = {
215,
272,
308,
350,
387,
423,
459,
495,
531,
610,
703,
744,
};

static uint32 patterns3 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types3 [] = {
218,
241,
277,
328,
365,
401,
437,
473,
509,
579,
681,
722,
};

static uint32 patterns229 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types229 [] = {
711,
};

static uint32 patterns202 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types202 [] = {
648,
757,
};

static uint32 patterns11 [] = {
SK_REF,
SK_UINT32,
SK_BOOL,
SK_CHAR32,
SK_INT32,
SK_INT64,
SK_INT16,
SK_UINT64,
SK_UINT8,
SK_UINT16,
SK_REAL32,
SK_CHAR8,
SK_INT8,
SK_REAL64,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types11 [] = {
189,
537,
548,
552,
556,
560,
564,
569,
573,
577,
617,
621,
625,
643,
652,
};

static uint32 patterns12 [] = {
SK_REF,
SK_POINTER,
SK_INT64,
SK_POINTER,
SK_UINT32,
SK_REAL64,
SK_REAL32,
SK_UINT8,
SK_UINT16,
SK_UINT64,
SK_INT8,
SK_INT16,
SK_INT32,
SK_CHAR8,
SK_CHAR32,
SK_BOOL,
SK_EXP + 9,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types12 [] = {
183,
184,
185,
190,
228,
229,
230,
231,
232,
233,
234,
235,
236,
237,
238,
239,
312,
538,
549,
553,
557,
561,
565,
570,
574,
578,
618,
622,
626,
644,
653,
};

static uint32 patterns205 [] = {
SK_CHAR32,
SK_BOOL,
SK_INT16,
SK_INT8,
SK_INT64,
SK_UINT16,
SK_UINT64,
SK_UINT32,
SK_REF,
SK_CHAR8,
SK_REAL32,
SK_INT32,
SK_UINT8,
SK_POINTER,
SK_REAL64,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types205 [] = {
632,
633,
634,
635,
636,
637,
638,
639,
660,
661,
662,
663,
664,
666,
767,
};

static uint32 patterns82 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_REF,
SK_REF,
SK_POINTER,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_INT32,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_UINT64,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types82 [] = {
217,
274,
310,
314,
352,
389,
425,
461,
497,
533,
612,
705,
746,
762,
};

static uint32 patterns10 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types10 [] = {
627,
};

static uint32 patterns159 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types159 [] = {
645,
755,
};

static uint32 patterns139 [] = {
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types139 [] = {
759,
760,
};

static uint32 patterns210 [] = {
SK_REF,
SK_REF,
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types210 [] = {
318,
542,
630,
766,
};

static uint32 patterns169 [] = {
SK_REF,
SK_REF,
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types169 [] = {
316,
540,
629,
764,
};

static uint32 patterns222 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types222 [] = {
671,
};

static uint32 patterns187 [] = {
SK_REF,
SK_REF,
SK_CHAR32,
SK_REF,
SK_CHAR8,
SK_REF,
SK_POINTER,
SK_REF,
SK_REAL64,
SK_REF,
SK_UINT16,
SK_REF,
SK_UINT8,
SK_REF,
SK_INT32,
SK_REF,
SK_BOOL,
SK_REF,
SK_UINT64,
SK_REF,
SK_REAL32,
SK_REF,
SK_UINT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types187 [] = {
198,
244,
280,
322,
359,
395,
431,
467,
503,
582,
675,
716,
};

static uint32 patterns136 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types136 [] = {
192,
265,
301,
343,
380,
416,
452,
488,
524,
603,
696,
737,
};

static uint32 patterns47 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types47 [] = {
201,
253,
289,
331,
368,
404,
440,
476,
512,
591,
684,
725,
};

static uint32 patterns203 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types203 [] = {
646,
756,
};

static uint32 patterns197 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types197 [] = {
670,
};

static uint32 patterns138 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_REF,
SK_REF,
SK_POINTER,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_INT32,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_UINT64,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types138 [] = {
214,
271,
307,
315,
349,
386,
422,
458,
494,
530,
609,
702,
743,
763,
};

static uint32 patterns230 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types230 [] = {
710,
};

static uint32 patterns46 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types46 [] = {
196,
247,
283,
327,
364,
400,
436,
472,
508,
585,
680,
721,
};

static uint32 patterns189 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types189 [] = {
543,
};

static uint32 patterns126 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types126 [] = {
197,
245,
281,
325,
362,
398,
434,
470,
506,
583,
678,
719,
};

static uint32 patterns89 [] = {
SK_REF,
SK_REF,
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types89 [] = {
313,
539,
628,
761,
};

static uint32 patterns220 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types220 [] = {
208,
260,
296,
338,
375,
411,
447,
483,
519,
598,
691,
732,
};

static uint32 patterns51 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types51 [] = {
224,
262,
298,
340,
377,
413,
449,
485,
521,
600,
693,
734,
};

static uint32 patterns137 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types137 [] = {
225,
263,
299,
341,
378,
414,
450,
486,
522,
601,
694,
735,
};

static uint32 patterns171 [] = {
SK_REF,
SK_REF,
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types171 [] = {
317,
541,
631,
765,
};

static uint32 patterns53 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types53 [] = {
226,
240,
276,
353,
390,
426,
462,
498,
534,
613,
706,
747,
};

static uint32 patterns191 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types191 [] = {
203,
255,
291,
333,
370,
406,
442,
478,
514,
593,
686,
727,
};

static uint32 patterns8 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types8 [] = {
187,
};

static uint32 patterns193 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types193 [] = {
204,
256,
292,
334,
371,
407,
443,
479,
515,
594,
687,
728,
};

static uint32 patterns170 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types170 [] = {
216,
273,
309,
351,
388,
424,
460,
496,
532,
611,
704,
745,
};

static uint32 patterns221 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types221 [] = {
205,
257,
293,
335,
372,
408,
444,
480,
516,
595,
688,
729,
};

static uint32 patterns146 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types146 [] = {
669,
};

static uint32 patterns52 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_INT32,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_UINT64,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types52 [] = {
213,
270,
306,
348,
385,
421,
457,
493,
529,
608,
701,
742,
};

static uint32 patterns125 [] = {
SK_REF,
SK_REF,
SK_CHAR32,
SK_REF,
SK_CHAR8,
SK_REF,
SK_POINTER,
SK_REF,
SK_REAL64,
SK_REF,
SK_UINT16,
SK_REF,
SK_UINT8,
SK_REF,
SK_INT32,
SK_REF,
SK_BOOL,
SK_REF,
SK_UINT64,
SK_REF,
SK_REAL32,
SK_REF,
SK_UINT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types125 [] = {
220,
249,
285,
321,
358,
394,
430,
466,
502,
587,
674,
715,
};

static uint32 patterns133 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types133 [] = {
227,
275,
311,
354,
391,
427,
463,
499,
535,
614,
707,
748,
};

static uint32 patterns41 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types41 [] = {
221,
250,
286,
330,
367,
403,
439,
475,
511,
588,
683,
724,
};

static uint32 patterns200 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types200 [] = {
200,
267,
303,
345,
382,
418,
454,
490,
526,
605,
698,
739,
};

static uint32 patterns134 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types134 [] = {
211,
268,
304,
346,
383,
419,
455,
491,
527,
606,
699,
740,
};

static uint32 patterns7 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types7 [] = {
191,
};

static uint32 patterns48 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types48 [] = {
186,
264,
300,
342,
379,
415,
451,
487,
523,
602,
695,
736,
};

static uint32 patterns44 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types44 [] = {
194,
242,
278,
323,
360,
396,
432,
468,
504,
580,
676,
717,
};

static uint32 patterns132 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types132 [] = {
210,
261,
297,
339,
376,
412,
448,
484,
520,
599,
692,
733,
};

static uint32 patterns204 [] = {
SK_REF,
SK_REAL32,
SK_CHAR8,
SK_CHAR32,
SK_BOOL,
SK_INT8,
SK_UINT16,
SK_UINT64,
SK_INT32,
SK_REAL64,
SK_POINTER,
SK_INT16,
SK_INT64,
SK_UINT8,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types204 [] = {
545,
615,
654,
655,
656,
657,
658,
659,
665,
708,
712,
749,
750,
751,
753,
};

static uint32 patterns201 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types201 [] = {
649,
758,
};

static uint32 patterns223 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types223 [] = {
709,
};

static uint32 patterns151 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types151 [] = {
199,
266,
302,
344,
381,
417,
453,
489,
525,
604,
697,
738,
};

static uint32 patterns50 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types50 [] = {
195,
246,
282,
326,
363,
399,
435,
471,
507,
584,
679,
720,
};

static uint32 patterns131 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types131 [] = {
202,
254,
290,
332,
369,
405,
441,
477,
513,
592,
685,
726,
};

static uint32 patterns192 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types192 [] = {
212,
269,
305,
347,
384,
420,
456,
492,
528,
607,
700,
741,
};

static uint32 patterns127 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types127 [] = {
193,
243,
279,
324,
361,
397,
433,
469,
505,
581,
677,
718,
};

static uint32 patterns76 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types76 [] = {
355,
647,
752,
754,
};

static uint32 patterns40 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_POINTER,
SK_REAL64,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_REAL32,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types40 [] = {
219,
248,
284,
329,
366,
402,
438,
474,
510,
586,
682,
723,
};

static struct cecil_info type_val[] = {
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 140, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 148, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 34, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns231, dyn_types231},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns9, dyn_types9},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 78, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 178, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns206, dyn_types206},
{(int) 0, (EIF_TYPE_INDEX) 151, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns49, dyn_types49},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns190, dyn_types190},
{(int) 0, (EIF_TYPE_INDEX) 175, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 44, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns5, dyn_types5},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns195, dyn_types195},
{(int) 0, (EIF_TYPE_INDEX) 143, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 46, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 177, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 43, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 120, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 57, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 173, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 131, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns194, dyn_types194},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 172, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 81, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns3, dyn_types3},
{(int) 0, (EIF_TYPE_INDEX) 171, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 176, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 72, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 179, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 17, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 170, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 71, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 22, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 115, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 126, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 61, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 181, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 25, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 133, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 62, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns229, dyn_types229},
{(int) 0, (EIF_TYPE_INDEX) 32, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 145, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 104, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 87, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 50, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 74, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns202, dyn_types202},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns11, dyn_types11},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 106, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 11, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 28, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 167, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 1, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 174, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 47, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 96, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 77, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 13, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 53, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns12, dyn_types12},
{(int) 0, (EIF_TYPE_INDEX) 5, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 23, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 26, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns205, dyn_types205},
{(int) 0, (EIF_TYPE_INDEX) 118, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 88, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 119, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 166, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 3, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns82, dyn_types82},
{(int) 0, (EIF_TYPE_INDEX) 67, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 142, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 103, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns10, dyn_types10},
{(int) 0, (EIF_TYPE_INDEX) 58, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns159, dyn_types159},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 27, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 6, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 91, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 116, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 49, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 109, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns139, dyn_types139},
{(int) 0, (EIF_TYPE_INDEX) 100, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 7, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 128, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns210, dyn_types210},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns169, dyn_types169},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns222, dyn_types222},
{(int) 0, (EIF_TYPE_INDEX) 39, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 59, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 139, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 79, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 68, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns187, dyn_types187},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 182, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns136, dyn_types136},
{(int) 0, (EIF_TYPE_INDEX) 152, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns47, dyn_types47},
{(int) 0, (EIF_TYPE_INDEX) 70, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns203, dyn_types203},
{(int) 0, (EIF_TYPE_INDEX) 14, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 136, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 180, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 108, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns197, dyn_types197},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns138, dyn_types138},
{(int) 0, (EIF_TYPE_INDEX) 48, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 10, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 95, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 93, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 18, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns230, dyn_types230},
{(int) 0, (EIF_TYPE_INDEX) 76, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 16, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 2, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns46, dyn_types46},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns189, dyn_types189},
{(int) 0, (EIF_TYPE_INDEX) 157, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 111, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns126, dyn_types126},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns89, dyn_types89},
{(int) 0, (EIF_TYPE_INDEX) 155, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 21, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 146, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 52, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 113, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns220, dyn_types220},
{(int) 0, (EIF_TYPE_INDEX) 65, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns51, dyn_types51},
{(int) 0, (EIF_TYPE_INDEX) 122, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 35, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 90, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 97, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 134, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 98, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 73, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 99, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns137, dyn_types137},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns171, dyn_types171},
{(int) 0, (EIF_TYPE_INDEX) 169, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 127, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns53, dyn_types53},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns191, dyn_types191},
{(int) 0, (EIF_TYPE_INDEX) 110, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 60, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns8, dyn_types8},
{(int) 0, (EIF_TYPE_INDEX) 20, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 64, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns193, dyn_types193},
{(int) 0, (EIF_TYPE_INDEX) 137, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns170, dyn_types170},
{(int) 0, (EIF_TYPE_INDEX) 29, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns221, dyn_types221},
{(int) 0, (EIF_TYPE_INDEX) 105, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 8, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 102, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 75, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns146, dyn_types146},
{(int) 0, (EIF_TYPE_INDEX) 45, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 83, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 101, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 164, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 66, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns52, dyn_types52},
{(int) 0, (EIF_TYPE_INDEX) 82, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns125, dyn_types125},
{(int) 0, (EIF_TYPE_INDEX) 112, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns133, dyn_types133},
{(int) 0, (EIF_TYPE_INDEX) 69, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns41, dyn_types41},
{(int) 0, (EIF_TYPE_INDEX) 24, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 31, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 123, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns200, dyn_types200},
{(int) 0, (EIF_TYPE_INDEX) 89, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 149, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 125, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 37, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 154, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns134, dyn_types134},
{(int) 0, (EIF_TYPE_INDEX) 12, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 107, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 55, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns7, dyn_types7},
{(int) 0, (EIF_TYPE_INDEX) 130, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns48, dyn_types48},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 114, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 84, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 158, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns44, dyn_types44},
{(int) 0, (EIF_TYPE_INDEX) 40, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns132, dyn_types132},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns204, dyn_types204},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns201, dyn_types201},
{(int) 0, (EIF_TYPE_INDEX) 33, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 94, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 30, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 117, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 4, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 54, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 92, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns223, dyn_types223},
{(int) 0, (EIF_TYPE_INDEX) 80, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 56, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 19, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 86, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 161, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 42, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 41, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 160, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 163, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 51, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 36, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns151, dyn_types151},
{(int) 0, (EIF_TYPE_INDEX) 63, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns50, dyn_types50},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns131, dyn_types131},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns192, dyn_types192},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns127, dyn_types127},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 121, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 38, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns76, dyn_types76},
{(int) 0, (EIF_TYPE_INDEX) 85, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 124, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns40, dyn_types40},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 15, NULL, NULL},
};

struct ctable egc_ce_type_init = {(int32) 293, sizeof(struct cecil_info),type_key, (char *) type_val};

static char * exp_type_key [] = {
"NATURAL_64",
"NATURAL_32",
"BOOLEAN",
"NATURAL_8",
(char *) 0,
(char *) 0,
"INTEGER_16",
(char *) 0,
"INTEGER_32",
"CHARACTER_8",
"UTF_CONVERTER",
(char *) 0,
"INTEGER_8",
(char *) 0,
"REAL_32",
"POINTER",
"CHARACTER_32",
"TYPED_POINTER",
(char *) 0,
"INTEGER_64",
(char *) 0,
"REAL_64",
"NATURAL_16",
};

static uint32 exp_patterns11 [] = {
SK_REF,
SK_UINT32,
SK_BOOL,
SK_CHAR32,
SK_INT32,
SK_INT64,
SK_INT16,
SK_UINT64,
SK_UINT8,
SK_UINT16,
SK_REAL32,
SK_CHAR8,
SK_INT8,
SK_REAL64,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX exp_dyn_types11 [] = {
188,
536,
547,
551,
555,
559,
563,
568,
572,
576,
616,
620,
624,
642,
651,
};

static struct cecil_info exp_type_val[] = {
{(int) 0, (EIF_TYPE_INDEX) 141, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 144, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 165, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 150, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 135, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 132, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 162, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 9, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 138, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 153, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 168, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 159, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, exp_patterns11, exp_dyn_types11},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 129, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 156, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 147, NULL, NULL},
};

struct ctable egc_ce_exp_type_init = {(int32) 23, sizeof(struct cecil_info),exp_type_key, (char *) exp_type_val};


#ifdef __cplusplus
}
#endif
