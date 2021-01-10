#include "eif_eiffel.h"
#include "eif_cecil.h"

#ifdef __cplusplus
extern "C" {
#endif

static char * type_key [] = {
"STRING_TABLE",
"EIFFELSTUDIO_SPECIFIC_LANGUAGE_EXCEPTION",
"HASH_TABLE_CURSOR",
(char *) 0,
"SET",
"NATURAL_64_REF",
(char *) 0,
"ARRAYED_QUEUE_ITERATION_CURSOR",
"RT_EXTENSION",
"SPECIAL",
"ANY",
"REFLECTOR_CONSTANTS",
"SYSTEM_ENCODINGS",
(char *) 0,
(char *) 0,
"RAW_FILE",
(char *) 0,
(char *) 0,
"ARRAYED_LIST",
"ARGUMENTS_32",
"SYSTEM_STRING",
"ARRAY",
(char *) 0,
(char *) 0,
"REFLECTOR_HELPER",
"EXCEPTION_MANAGER",
"JSON_NUMBER",
"VOID_ASSIGNED_TO_EXPANDED",
"PREDICATE",
(char *) 0,
(char *) 0,
"ENCODING",
(char *) 0,
"IMMUTABLE_STRING_8",
"ITERATION_CURSOR",
"COMPARABLE",
"JSON_BOOLEAN",
"MACHINE_EXCEPTION",
"ISE_EXCEPTION_MANAGER",
"RESIZABLE",
"ACTIVE",
(char *) 0,
"TYPE",
"BOOLEAN",
"ADDRESS_APPLIED_TO_MELTED_FEATURE",
"ARGUMENTS",
"REAL_32_REF",
"EXCEPTION",
"NATIVE_STRING",
"CURSOR_STRUCTURE",
"SYSTEM_ENCODINGS_IMP",
"REFLECTOR",
(char *) 0,
"INTEGER_8",
"INTEGER_INTERVAL",
"TO_SPECIAL",
(char *) 0,
"ABSTRACT_SPECIAL",
"LOOP_INVARIANT_VIOLATION",
"MANAGED_POINTER",
(char *) 0,
"INTEGER_16",
"NATURAL_16_REF",
"EXTERNAL_FAILURE",
"EXCEPTIONS",
"COUNTABLE_SEQUENCE",
"UNIX_FILE_INFO",
(char *) 0,
"OBSOLETE_EXCEPTION",
"ARRAY_ITERATION_CURSOR",
"CHARACTER_32",
"PART_COMPARABLE",
"ROUTINE_FAILURE",
"C_STRING",
"STRING_32",
"GENERAL_SPECIAL_ITERATION_CURSOR",
(char *) 0,
"JSON_STRING",
"ENCODING_I",
(char *) 0,
"LINEAR",
"COUNTABLE",
"RT_DBG_ATTRIBUTE_RECORD",
"NATURAL_32",
"OPERATING_ENVIRONMENT",
"TUPLE",
"LIST",
(char *) 0,
"CREATE_ON_DEFERRED",
(char *) 0,
"LANGUAGE_EXCEPTION",
"RT_DBG_INTERNAL",
"INDEXABLE_ITERATION_CURSOR",
"FILE_ITERATION_CURSOR",
"OPERATING_SYSTEM_FAILURE",
"HASH_TABLE",
"ISE_RUNTIME",
"ROUTINE",
"CELL",
"REAL_64",
"LINKED_LIST_CURSOR",
"RT_EXTENSION_COMMON",
"RESCUE_FAILURE",
"HARDWARE_EXCEPTION",
"OLD_VIOLATION",
(char *) 0,
"NATURAL_64",
"CONTAINER",
"LINKED_LIST",
(char *) 0,
"ARRAYED_LIST_CURSOR",
"STRING_TO_INTEGER_CONVERTOR",
(char *) 0,
(char *) 0,
"MISMATCH_INFORMATION",
(char *) 0,
"EIFFEL_RUNTIME_PANIC",
"REFLECTED_COPY_SEMANTICS_OBJECT",
"NUMERIC",
"OBJECT_GRAPH_MARKER",
"INTEGER_64_REF",
(char *) 0,
"CSVHANDLER",
(char *) 0,
"INTEGER_64",
"INVARIANT_VIOLATION",
(char *) 0,
"PRECONDITION_VIOLATION",
"RT_DBG_EXECUTION_RECORDER",
"NO_MORE_MEMORY",
"TABLE",
"ITERABLE",
"INTEGER_16_REF",
"TYPED_POINTER",
(char *) 0,
"COLLECTION",
(char *) 0,
(char *) 0,
"HASHABLE",
(char *) 0,
"UNBOUNDED",
"PROCEDURE",
"NATIVE_ARRAY",
(char *) 0,
"JSONHANDLER",
"RESUMPTION_FAILURE",
"NATURAL_32_REF",
"IO_FAILURE",
"RT_DBG_EXECUTION_PARAMETERS",
"EXCEP_CONST",
(char *) 0,
"SERIALIZATION_FAILURE",
"TABLE_ITERATION_CURSOR",
"EXCEPTION_MANAGER_FACTORY",
"IMMUTABLE_STRING_GENERAL",
"STRING_TO_NUMERIC_CONVERTOR",
"PLATFORM",
"JSON_ARRAY",
(char *) 0,
"JSON_VALUE",
"ARRAYED_LIST_ITERATION_CURSOR",
(char *) 0,
"BOX",
"STRING_GENERAL",
"STRING_8",
"QUEUE",
"MISMATCH_CORRECTOR",
"IMMUTABLE_STRING_32",
(char *) 0,
(char *) 0,
"STRING_SEARCHER",
"DISPENSER",
"JSON_OBJECT",
(char *) 0,
(char *) 0,
"HASH_TABLE_ITERATION_CURSOR",
"RT_EXTENSION_GENERAL",
"POINTER_REF",
(char *) 0,
"INFINITE",
"CHAIN",
(char *) 0,
"STRING_32_ITERATION_CURSOR",
"INDEXABLE",
(char *) 0,
"READABLE_STRING_GENERAL",
"BAG",
"SYSTEM_STRING_FACTORY",
"READABLE_STRING_32",
"NATURAL_16",
"ENCODING_HELPER",
(char *) 0,
"SPECIAL_ITERATION_CURSOR",
(char *) 0,
"COM_FAILURE",
"VARIANT_VIOLATION",
(char *) 0,
"PRIMES",
"IO_MEDIUM",
"OPERATING_SYSTEM_EXCEPTION",
"DOUBLE_MATH",
"ASSERTION_VIOLATION",
"POINTER",
(char *) 0,
(char *) 0,
(char *) 0,
"HEXADECIMAL_STRING_TO_INTEGER_CONVERTER",
"CODE_PAGE_CONSTANTS",
(char *) 0,
"EXECUTION_ENVIRONMENT",
"CHARACTER_8",
"STRING_ITERATION_CURSOR",
"INTEGER_OVERFLOW_CHECKER",
"NUMERIC_INFORMATION",
"RT_DBG_COMMON",
"LINKED_LIST_ITERATION_CURSOR",
"INTEGER_32_REF",
"STD_FILES",
"RT_DBG_FIELD_RECORD",
"READABLE_STRING_8",
"NATURAL_8_REF",
"SEQUENCE",
"REAL_64_REF",
(char *) 0,
"TRAVERSABLE",
(char *) 0,
"CONSOLE",
"DYNAMIC_CHAIN",
"RT_DBG_LOCAL_RECORD",
"DYNAMIC_TABLE",
(char *) 0,
"MISMATCH_FAILURE",
(char *) 0,
"CHARACTER_32_REF",
"PLAIN_TEXT_FILE",
(char *) 0,
"CHECK_VIOLATION",
"DISPOSABLE",
"CODE_PAGES",
"CHARACTER_8_REF",
"BOOLEAN_REF",
(char *) 0,
"OBJECT_GRAPH_TRAVERSABLE",
"STRING_32_SEARCHER",
"SYSTEM_ENCODINGS_I",
"SYS_EXCEPTION",
"EIFFEL_RUNTIME_EXCEPTION",
"INTERNAL",
"ARRAYED_QUEUE",
(char *) 0,
"REAL_32",
"STRING_8_ITERATION_CURSOR",
"TABLE_ITERABLE",
"STRING_HANDLER",
"DATABASE",
"POSTCONDITION_VIOLATION",
"LINKABLE",
(char *) 0,
"REFACTORING_HELPER",
"FUNCTION",
"DEVELOPER_EXCEPTION",
"FLOATING_POINT_FAILURE",
"STRING_TO_REAL_CONVERTOR",
"EXCEPTION_IN_SIGNAL_HANDLER_FAILURE",
"OBJECT_GRAPH_BREADTH_FIRST_TRAVERSABLE",
"INTEGER_8_REF",
"CURSOR",
"JSON_NULL",
"JSON_VISITOR",
"VOID_TARGET",
"BAD_INSPECT_VALUE",
"DYNAMIC_LIST",
"EIF_EXCEPTION",
"STRING_8_SEARCHER",
"BOUNDED",
"INTEGER_32",
"READABLE_INDEXABLE_ITERATION_CURSOR",
"ENCODING_IMP",
"RT_DBG_VALUE_RECORD",
"REFLECTED_REFERENCE_OBJECT",
"CHARACTER_PROPERTY",
"BILINEAR",
"TYPED_INDEXABLE_ITERATION_CURSOR",
"FILE",
"OPERATING_SYSTEM_SIGNAL_FAILURE",
"APPLICATION",
"UTF_CONVERTER",
"FINITE",
"REFLECTED_OBJECT",
(char *) 0,
"PATH",
"DEBUG_OUTPUT",
"UNICODE_CONVERSION",
(char *) 0,
"MATH_CONST",
(char *) 0,
"RT_DBG_CALL_RECORD",
"READABLE_INDEXABLE",
(char *) 0,
"DATA_EXCEPTION",
"NATIVE_STRING_HANDLER",
(char *) 0,
(char *) 0,
"FILE_INFO",
(char *) 0,
"VERSIONABLE",
"NATURAL_8",
};

static uint32 patterns146 [] = {
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types146 [] = {
641,
688,
};

static uint32 patterns201 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types201 [] = {
253,
};

static uint32 patterns240 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types240 [] = {
777,
};

static uint32 patterns3 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types3 [] = {
296,
342,
378,
414,
450,
469,
486,
522,
546,
626,
722,
763,
};

static uint32 patterns50 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types50 [] = {
291,
333,
369,
405,
441,
460,
479,
513,
568,
617,
713,
754,
};

static uint32 patterns5 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types5 [] = {
300,
315,
351,
387,
423,
459,
478,
495,
556,
630,
695,
736,
};

static uint32 patterns10 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types10 [] = {
654,
};

static uint32 patterns48 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types48 [] = {
206,
225,
258,
274,
319,
355,
391,
427,
499,
551,
699,
740,
};

static uint32 patterns52 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types52 [] = {
301,
346,
382,
418,
454,
473,
490,
526,
577,
631,
726,
767,
};

static uint32 patterns203 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types203 [] = {
205,
224,
257,
281,
326,
362,
398,
434,
506,
561,
706,
747,
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
SK_EXP + 12,
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
194,
195,
196,
202,
220,
242,
243,
244,
245,
246,
247,
248,
249,
250,
251,
252,
290,
309,
545,
585,
590,
594,
598,
602,
606,
610,
614,
639,
645,
649,
653,
};

static uint32 patterns136 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types136 [] = {
204,
223,
256,
280,
325,
361,
397,
433,
505,
560,
705,
746,
};

static uint32 patterns54 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types54 [] = {
304,
348,
384,
420,
456,
475,
492,
528,
579,
634,
728,
769,
};

static uint32 patterns145 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types145 [] = {
683,
};

static uint32 patterns51 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types51 [] = {
303,
350,
386,
422,
458,
477,
494,
530,
581,
633,
730,
771,
};

static uint32 patterns130 [] = {
SK_REF,
SK_REF,
SK_POINTER,
SK_REF,
SK_REAL32,
SK_REF,
SK_UINT16,
SK_REF,
SK_UINT8,
SK_REF,
SK_INT32,
SK_REF,
SK_CHAR8,
SK_REF,
SK_BOOL,
SK_REF,
SK_UINT64,
SK_REF,
SK_CHAR32,
SK_REF,
SK_REAL64,
SK_REF,
SK_UINT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types130 [] = {
298,
344,
380,
416,
452,
471,
488,
524,
548,
628,
724,
765,
};

static uint32 patterns49 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types49 [] = {
198,
222,
255,
279,
324,
360,
396,
432,
504,
559,
704,
745,
};

static uint32 patterns210 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types210 [] = {
684,
};

static uint32 patterns218 [] = {
SK_INT64,
SK_CHAR8,
SK_INT32,
SK_CHAR32,
SK_BOOL,
SK_UINT8,
SK_REAL64,
SK_INT8,
SK_REAL32,
SK_UINT64,
SK_UINT16,
SK_UINT32,
SK_INT16,
SK_POINTER,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types218 [] = {
586,
587,
591,
595,
599,
603,
607,
611,
636,
640,
642,
646,
650,
669,
686,
};

static uint32 patterns117 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types117 [] = {
221,
335,
371,
407,
443,
462,
481,
515,
570,
619,
715,
756,
};

static uint32 patterns132 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types132 [] = {
211,
230,
262,
273,
318,
354,
390,
426,
498,
550,
698,
739,
};

static uint32 patterns90 [] = {
SK_REF,
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types90 [] = {
533,
538,
689,
731,
};

static uint32 patterns7 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types7 [] = {
203,
};

static uint32 patterns78 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_UINT64,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types78 [] = {
312,
537,
670,
671,
};

static uint32 patterns214 [] = {
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types214 [] = {
314,
668,
};

static uint32 patterns204 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types204 [] = {
209,
228,
260,
284,
329,
365,
401,
437,
509,
564,
709,
750,
};

static uint32 patterns161 [] = {
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types161 [] = {
310,
665,
};

static uint32 patterns143 [] = {
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_REF,
SK_REF,
SK_UINT64,
SK_INT32,
SK_INT32,
SK_REF,
SK_REAL64,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types143 [] = {
241,
270,
278,
289,
323,
359,
395,
431,
503,
536,
558,
694,
703,
744,
};

static uint32 patterns47 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types47 [] = {
212,
231,
263,
275,
320,
356,
392,
428,
500,
552,
700,
741,
};

static uint32 patterns11 [] = {
SK_REF,
SK_POINTER,
SK_INT64,
SK_UINT64,
SK_CHAR8,
SK_INT32,
SK_CHAR32,
SK_BOOL,
SK_UINT8,
SK_REAL64,
SK_INT8,
SK_REAL32,
SK_UINT16,
SK_UINT32,
SK_INT16,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types11 [] = {
201,
308,
544,
584,
589,
593,
597,
601,
605,
609,
613,
638,
644,
648,
652,
};

static uint32 patterns231 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types231 [] = {
208,
227,
254,
283,
328,
364,
400,
436,
508,
563,
708,
749,
};

static uint32 patterns174 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types174 [] = {
295,
341,
377,
413,
449,
468,
485,
521,
576,
625,
721,
762,
};

static uint32 patterns8 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types8 [] = {
217,
};

static uint32 patterns43 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types43 [] = {
299,
345,
381,
417,
453,
472,
489,
525,
555,
629,
725,
766,
};

static uint32 patterns190 [] = {
SK_REF,
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types190 [] = {
532,
540,
691,
733,
};

static uint32 patterns139 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types139 [] = {
305,
349,
385,
421,
457,
476,
493,
529,
580,
635,
729,
770,
};

static uint32 patterns232 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types232 [] = {
216,
235,
267,
286,
331,
367,
403,
439,
511,
566,
711,
752,
};

static uint32 patterns241 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types241 [] = {
778,
};

static uint32 patterns242 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types242 [] = {
615,
};

static uint32 patterns172 [] = {
SK_REF,
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types172 [] = {
531,
541,
692,
734,
};

static uint32 patterns233 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types233 [] = {
685,
};

static uint32 patterns183 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types183 [] = {
239,
338,
374,
410,
446,
465,
482,
518,
573,
622,
718,
759,
};

static uint32 patterns53 [] = {
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_UINT64,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types53 [] = {
240,
269,
271,
288,
316,
352,
388,
424,
496,
557,
696,
737,
};

static uint32 patterns208 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types208 [] = {
207,
226,
259,
282,
327,
363,
399,
435,
507,
562,
707,
748,
};

static uint32 patterns42 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types42 [] = {
297,
343,
379,
415,
451,
470,
487,
523,
547,
627,
723,
764,
};

static uint32 patterns215 [] = {
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types215 [] = {
313,
667,
};

static uint32 patterns217 [] = {
SK_INT16,
SK_CHAR8,
SK_INT64,
SK_BOOL,
SK_CHAR32,
SK_UINT8,
SK_REAL32,
SK_UINT32,
SK_UINT16,
SK_UINT64,
SK_REF,
SK_POINTER,
SK_INT32,
SK_REAL64,
SK_INT8,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types217 [] = {
655,
656,
657,
658,
659,
660,
661,
662,
663,
664,
678,
679,
680,
681,
682,
};

static uint32 patterns140 [] = {
SK_CHAR8,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types140 [] = {
197,
237,
336,
372,
408,
444,
463,
516,
571,
620,
716,
757,
};

static uint32 patterns137 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types137 [] = {
218,
236,
268,
287,
332,
368,
404,
440,
512,
567,
712,
753,
};

static uint32 patterns207 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types207 [] = {
293,
339,
375,
411,
447,
466,
483,
519,
574,
623,
719,
760,
};

static uint32 patterns216 [] = {
SK_POINTER,
SK_INT64,
SK_UINT64,
SK_INT16,
SK_INT32,
SK_CHAR8,
SK_CHAR32,
SK_REAL64,
SK_REAL32,
SK_REF,
SK_BOOL,
SK_UINT8,
SK_UINT16,
SK_UINT32,
SK_INT8,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types216 [] = {
306,
542,
616,
672,
673,
674,
675,
676,
677,
687,
735,
772,
773,
774,
775,
};

static uint32 patterns83 [] = {
SK_REF,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_INT32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_REF,
SK_REF,
SK_UINT64,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_INT32,
SK_REF,
SK_REAL64,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types83 [] = {
294,
340,
376,
412,
448,
467,
484,
520,
535,
575,
624,
693,
720,
761,
};

static uint32 patterns234 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types234 [] = {
776,
};

static uint32 patterns175 [] = {
SK_REF,
SK_REF,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types175 [] = {
534,
539,
690,
732,
};

static uint32 patterns213 [] = {
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types213 [] = {
311,
666,
};

static uint32 patterns9 [] = {
SK_REF,
SK_BOOL,
SK_REF,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types9 [] = {
199,
582,
};

static uint32 patterns141 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types141 [] = {
292,
334,
370,
406,
442,
461,
480,
514,
569,
618,
714,
755,
};

static uint32 patterns142 [] = {
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_CHAR8,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types142 [] = {
302,
347,
383,
419,
455,
474,
491,
527,
578,
632,
727,
768,
};

static uint32 patterns133 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types133 [] = {
213,
232,
264,
276,
321,
357,
393,
429,
501,
553,
701,
742,
};

static uint32 patterns205 [] = {
SK_CHAR8,
SK_REF,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_INT32,
SK_BOOL,
SK_UINT64,
SK_CHAR32,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types205 [] = {
219,
238,
337,
373,
409,
445,
464,
517,
572,
621,
717,
758,
};

static uint32 patterns200 [] = {
SK_CHAR8,
SK_REF,
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_CHAR32,
SK_REF,
SK_POINTER,
SK_REF,
SK_REAL32,
SK_REF,
SK_UINT16,
SK_REF,
SK_UINT8,
SK_REF,
SK_BOOL,
SK_REF,
SK_UINT64,
SK_REF,
SK_REAL64,
SK_REF,
SK_UINT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types200 [] = {
214,
233,
265,
277,
322,
358,
394,
430,
502,
554,
702,
743,
};

static uint32 patterns206 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types206 [] = {
215,
234,
266,
285,
330,
366,
402,
438,
510,
565,
710,
751,
};

static uint32 patterns45 [] = {
SK_CHAR8,
SK_REF,
SK_INT32,
SK_CHAR32,
SK_POINTER,
SK_REAL32,
SK_UINT16,
SK_UINT8,
SK_BOOL,
SK_UINT64,
SK_REAL64,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types45 [] = {
210,
229,
261,
272,
317,
353,
389,
425,
497,
549,
697,
738,
};

static struct cecil_info type_val[] = {
{(int) 1, (EIF_TYPE_INDEX) 0, patterns146, dyn_types146},
{(int) 0, (EIF_TYPE_INDEX) 77, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 95, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns201, dyn_types201},
{(int) 0, (EIF_TYPE_INDEX) 144, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns240, dyn_types240},
{(int) 0, (EIF_TYPE_INDEX) 35, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns3, dyn_types3},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 100, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 6, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 119, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns50, dyn_types50},
{(int) 0, (EIF_TYPE_INDEX) 115, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 10, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns5, dyn_types5},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 27, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 29, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 185, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 74, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns10, dyn_types10},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 4, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 181, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns48, dyn_types48},
{(int) 0, (EIF_TYPE_INDEX) 88, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 184, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 50, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 30, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns52, dyn_types52},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns203, dyn_types203},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns12, dyn_types12},
{(int) 0, (EIF_TYPE_INDEX) 170, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 78, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 111, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 156, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 48, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 99, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns136, dyn_types136},
{(int) 0, (EIF_TYPE_INDEX) 23, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 102, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 143, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 121, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns54, dyn_types54},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 126, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 83, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 90, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 140, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 150, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 67, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 47, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns145, dyn_types145},
{(int) 0, (EIF_TYPE_INDEX) 109, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 57, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns51, dyn_types51},
{(int) 0, (EIF_TYPE_INDEX) 164, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 87, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 76, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 92, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 179, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns130, dyn_types130},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 188, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 191, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns49, dyn_types49},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns210, dyn_types210},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns218, dyn_types218},
{(int) 0, (EIF_TYPE_INDEX) 149, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 16, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 131, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns117, dyn_types117},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 79, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 72, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 104, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns132, dyn_types132},
{(int) 0, (EIF_TYPE_INDEX) 110, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 55, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns90, dyn_types90},
{(int) 0, (EIF_TYPE_INDEX) 14, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns7, dyn_types7},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns78, dyn_types78},
{(int) 0, (EIF_TYPE_INDEX) 161, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns214, dyn_types214},
{(int) 0, (EIF_TYPE_INDEX) 33, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 60, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 51, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 62, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 146, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns204, dyn_types204},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns161, dyn_types161},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 96, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 43, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 123, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 63, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 106, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 128, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 24, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 132, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 2, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 134, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 86, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 82, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 105, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 66, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns143, dyn_types143},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns47, dyn_types47},
{(int) 0, (EIF_TYPE_INDEX) 138, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns11, dyn_types11},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns231, dyn_types231},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 129, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns174, dyn_types174},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns8, dyn_types8},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns43, dyn_types43},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 17, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 59, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 147, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 71, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 11, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 31, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 69, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns190, dyn_types190},
{(int) 0, (EIF_TYPE_INDEX) 46, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 175, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 42, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 32, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 186, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 183, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns139, dyn_types139},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns232, dyn_types232},
{(int) 0, (EIF_TYPE_INDEX) 176, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 182, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns241, dyn_types241},
{(int) 0, (EIF_TYPE_INDEX) 122, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 178, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 37, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns242, dyn_types242},
{(int) 0, (EIF_TYPE_INDEX) 189, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns172, dyn_types172},
{(int) 0, (EIF_TYPE_INDEX) 34, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 171, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns233, dyn_types233},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns183, dyn_types183},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 113, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns53, dyn_types53},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 174, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns208, dyn_types208},
{(int) 0, (EIF_TYPE_INDEX) 8, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 177, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 152, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 19, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns42, dyn_types42},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 54, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 84, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 117, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 93, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 53, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 26, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 80, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 173, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 45, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 5, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 98, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 167, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 112, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 41, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 40, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 36, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns215, dyn_types215},
{(int) 0, (EIF_TYPE_INDEX) 135, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 15, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns217, dyn_types217},
{(int) 0, (EIF_TYPE_INDEX) 180, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 153, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns140, dyn_types140},
{(int) 0, (EIF_TYPE_INDEX) 159, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns137, dyn_types137},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 190, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns207, dyn_types207},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns216, dyn_types216},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns83, dyn_types83},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 70, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 162, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 120, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 85, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 89, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 18, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 165, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 168, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 20, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 38, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 22, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 61, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 65, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 103, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns234, dyn_types234},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 158, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 114, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns175, dyn_types175},
{(int) 0, (EIF_TYPE_INDEX) 91, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 1, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 81, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns213, dyn_types213},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 28, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns9, dyn_types9},
{(int) 0, (EIF_TYPE_INDEX) 49, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 52, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 44, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 58, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 21, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 141, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 94, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 187, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 7, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 73, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 75, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns141, dyn_types141},
{(int) 0, (EIF_TYPE_INDEX) 64, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 39, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns142, dyn_types142},
{(int) 0, (EIF_TYPE_INDEX) 137, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns133, dyn_types133},
{(int) 0, (EIF_TYPE_INDEX) 193, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 127, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 107, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 9, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns205, dyn_types205},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns200, dyn_types200},
{(int) 0, (EIF_TYPE_INDEX) 118, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 56, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 116, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 13, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns206, dyn_types206},
{(int) 0, (EIF_TYPE_INDEX) 101, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 130, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 124, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 192, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 25, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 125, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns45, dyn_types45},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 68, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 97, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 108, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 3, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 155, NULL, NULL},
};

struct ctable egc_ce_type_init = {(int32) 307, sizeof(struct cecil_info),type_key, (char *) type_val};

static char * exp_type_key [] = {
(char *) 0,
"NATURAL_32",
"BOOLEAN",
"NATURAL_8",
(char *) 0,
(char *) 0,
"NATURAL_64",
(char *) 0,
"INTEGER_32",
"CHARACTER_8",
"UTF_CONVERTER",
(char *) 0,
"INTEGER_8",
"INTEGER_16",
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
SK_POINTER,
SK_INT64,
SK_UINT64,
SK_CHAR8,
SK_INT32,
SK_CHAR32,
SK_BOOL,
SK_UINT8,
SK_REAL64,
SK_INT8,
SK_REAL32,
SK_UINT16,
SK_UINT32,
SK_INT16,
SK_INVALID
};

static EIF_TYPE_INDEX exp_dyn_types11 [] = {
200,
307,
543,
583,
588,
592,
596,
600,
604,
608,
612,
637,
643,
647,
651,
};

static struct cecil_info exp_type_val[] = {
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 148, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 169, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 154, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 145, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 136, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 166, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 12, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 142, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 139, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 157, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 172, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 163, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, exp_patterns11, exp_dyn_types11},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 133, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 160, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 151, NULL, NULL},
};

struct ctable egc_ce_exp_type_init = {(int32) 23, sizeof(struct cecil_info),exp_type_key, (char *) exp_type_val};


#ifdef __cplusplus
}
#endif
