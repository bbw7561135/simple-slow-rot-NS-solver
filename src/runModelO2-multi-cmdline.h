/** @file runModelO2-multi-cmdline.h
 *  @brief The header file for the command line option parser
 *  generated by GNU Gengetopt version 2.22.6
 *  http://www.gnu.org/software/gengetopt.
 *  DO NOT modify this file, since it can be overwritten
 *  @author GNU Gengetopt by Lorenzo Bettini */

#ifndef RUNMODELO2_MULTI_CMDLINE_H
#define RUNMODELO2_MULTI_CMDLINE_H

/* If we use autoconf.  */
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdio.h> /* for FILE */

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#ifndef CMDLINE_PARSER_PACKAGE
/** @brief the program name (used for printing errors) */
#define CMDLINE_PARSER_PACKAGE "runModelO2-multi"
#endif

#ifndef CMDLINE_PARSER_PACKAGE_NAME
/** @brief the complete program name (used for help and version) */
#define CMDLINE_PARSER_PACKAGE_NAME "runModelO2-multi"
#endif

#ifndef CMDLINE_PARSER_VERSION
/** @brief the program version */
#define CMDLINE_PARSER_VERSION "0.4"
#endif

/** @brief Where the command line options are stored */
struct gengetopt_args_info
{
  const char *help_help; /**< @brief Print help and exit help description.  */
  const char *version_help; /**< @brief Print version and exit help description.  */
  char * conf_file_arg;	/**< @brief Configuration file to read (default='modelO2-multi.conf').  */
  char * conf_file_orig;	/**< @brief Configuration file to read original value given at command line.  */
  const char *conf_file_help; /**< @brief Configuration file to read help description.  */
  double pc_low_arg;	/**< @brief Smallest central pressure [dyne/cm^2] (default='4.e+34').  */
  char * pc_low_orig;	/**< @brief Smallest central pressure [dyne/cm^2] original value given at command line.  */
  const char *pc_low_help; /**< @brief Smallest central pressure [dyne/cm^2] help description.  */
  double pc_high_arg;	/**< @brief Largest  central pressure [dyne/cm^2] (default='2.e+36').  */
  char * pc_high_orig;	/**< @brief Largest  central pressure [dyne/cm^2] original value given at command line.  */
  const char *pc_high_help; /**< @brief Largest  central pressure [dyne/cm^2] help description.  */
  int num_arg;	/**< @brief Number of models to run (>=2, pressure is log-spaced) (default='32').  */
  char * num_orig;	/**< @brief Number of models to run (>=2, pressure is log-spaced) original value given at command line.  */
  const char *num_help; /**< @brief Number of models to run (>=2, pressure is log-spaced) help description.  */
  double* extra_pc_arg;	/**< @brief Central pressure of extra model(s) to run [dyne/cm^2].  */
  char ** extra_pc_orig;	/**< @brief Central pressure of extra model(s) to run [dyne/cm^2] original value given at command line.  */
  unsigned int extra_pc_min; /**< @brief Central pressure of extra model(s) to run [dyne/cm^2]'s minimum occurreces */
  unsigned int extra_pc_max; /**< @brief Central pressure of extra model(s) to run [dyne/cm^2]'s maximum occurreces */
  const char *extra_pc_help; /**< @brief Central pressure of extra model(s) to run [dyne/cm^2] help description.  */
  double* extra_M_arg;	/**< @brief Total mass of extra model(s) to run [solar masses].  */
  char ** extra_M_orig;	/**< @brief Total mass of extra model(s) to run [solar masses] original value given at command line.  */
  unsigned int extra_M_min; /**< @brief Total mass of extra model(s) to run [solar masses]'s minimum occurreces */
  unsigned int extra_M_max; /**< @brief Total mass of extra model(s) to run [solar masses]'s maximum occurreces */
  const char *extra_M_help; /**< @brief Total mass of extra model(s) to run [solar masses] help description.  */
  double* extra_R_arg;	/**< @brief Stellar radius of extra model(s) to run [km].  */
  char ** extra_R_orig;	/**< @brief Stellar radius of extra model(s) to run [km] original value given at command line.  */
  unsigned int extra_R_min; /**< @brief Stellar radius of extra model(s) to run [km]'s minimum occurreces */
  unsigned int extra_R_max; /**< @brief Stellar radius of extra model(s) to run [km]'s maximum occurreces */
  const char *extra_R_help; /**< @brief Stellar radius of extra model(s) to run [km] help description.  */
  double* extra_C_arg;	/**< @brief Compactness of extra model(s) to run.  */
  char ** extra_C_orig;	/**< @brief Compactness of extra model(s) to run original value given at command line.  */
  unsigned int extra_C_min; /**< @brief Compactness of extra model(s) to run's minimum occurreces */
  unsigned int extra_C_max; /**< @brief Compactness of extra model(s) to run's maximum occurreces */
  const char *extra_C_help; /**< @brief Compactness of extra model(s) to run help description.  */
  double* extra_Qbar_arg;	/**< @brief Qbar of extra model(s) to run.  */
  char ** extra_Qbar_orig;	/**< @brief Qbar of extra model(s) to run original value given at command line.  */
  unsigned int extra_Qbar_min; /**< @brief Qbar of extra model(s) to run's minimum occurreces */
  unsigned int extra_Qbar_max; /**< @brief Qbar of extra model(s) to run's maximum occurreces */
  const char *extra_Qbar_help; /**< @brief Qbar of extra model(s) to run help description.  */
  double* extra_Ibar_arg;	/**< @brief Ibar of extra model(s) to run.  */
  char ** extra_Ibar_orig;	/**< @brief Ibar of extra model(s) to run original value given at command line.  */
  unsigned int extra_Ibar_min; /**< @brief Ibar of extra model(s) to run's minimum occurreces */
  unsigned int extra_Ibar_max; /**< @brief Ibar of extra model(s) to run's maximum occurreces */
  const char *extra_Ibar_help; /**< @brief Ibar of extra model(s) to run help description.  */
  char * eos_name_arg;	/**< @brief Name of the EoS model. (default='SLy').  */
  char * eos_name_orig;	/**< @brief Name of the EoS model. original value given at command line.  */
  const char *eos_name_help; /**< @brief Name of the EoS model. help description.  */
  double log10p1_arg;	/**< @brief The log (base 10) of (p1 in dyne/cm^2). (default='34.384').  */
  char * log10p1_orig;	/**< @brief The log (base 10) of (p1 in dyne/cm^2). original value given at command line.  */
  const char *log10p1_help; /**< @brief The log (base 10) of (p1 in dyne/cm^2). help description.  */
  double Gamma1_arg;	/**< @brief Power law index Gamma1 (default='3.005').  */
  char * Gamma1_orig;	/**< @brief Power law index Gamma1 original value given at command line.  */
  const char *Gamma1_help; /**< @brief Power law index Gamma1 help description.  */
  double Gamma2_arg;	/**< @brief Power law index Gamma2 (default='2.988').  */
  char * Gamma2_orig;	/**< @brief Power law index Gamma2 original value given at command line.  */
  const char *Gamma2_help; /**< @brief Power law index Gamma2 help description.  */
  double Gamma3_arg;	/**< @brief Power law index Gamma3 (default='2.851').  */
  char * Gamma3_orig;	/**< @brief Power law index Gamma3 original value given at command line.  */
  const char *Gamma3_help; /**< @brief Power law index Gamma3 help description.  */
  double log10rho1_arg;	/**< @brief The log (base 10) of (rho1 in g/cm^3). (default='14.7').  */
  char * log10rho1_orig;	/**< @brief The log (base 10) of (rho1 in g/cm^3). original value given at command line.  */
  const char *log10rho1_help; /**< @brief The log (base 10) of (rho1 in g/cm^3). help description.  */
  char * out_arg;	/**< @brief The file name to output the multiple model summary (default='summary2.dat').  */
  char * out_orig;	/**< @brief The file name to output the multiple model summary original value given at command line.  */
  const char *out_help; /**< @brief The file name to output the multiple model summary help description.  */
  char * out_extra_basename_arg;	/**< @brief The base file name to output the extra model(s) profile(s). The full filename will consist of this string concatenated with \"-%n-%v.dat\" where %n is the name of the specified property (pc,M,R,C) and where %v is the value of the property. (default='profile').  */
  char * out_extra_basename_orig;	/**< @brief The base file name to output the extra model(s) profile(s). The full filename will consist of this string concatenated with \"-%n-%v.dat\" where %n is the name of the specified property (pc,M,R,C) and where %v is the value of the property. original value given at command line.  */
  const char *out_extra_basename_help; /**< @brief The base file name to output the extra model(s) profile(s). The full filename will consist of this string concatenated with \"-%n-%v.dat\" where %n is the name of the specified property (pc,M,R,C) and where %v is the value of the property. help description.  */
  
  unsigned int help_given ;	/**< @brief Whether help was given.  */
  unsigned int version_given ;	/**< @brief Whether version was given.  */
  unsigned int conf_file_given ;	/**< @brief Whether conf-file was given.  */
  unsigned int pc_low_given ;	/**< @brief Whether pc-low was given.  */
  unsigned int pc_high_given ;	/**< @brief Whether pc-high was given.  */
  unsigned int num_given ;	/**< @brief Whether num was given.  */
  unsigned int extra_pc_given ;	/**< @brief Whether extra-pc was given.  */
  unsigned int extra_M_given ;	/**< @brief Whether extra-M was given.  */
  unsigned int extra_R_given ;	/**< @brief Whether extra-R was given.  */
  unsigned int extra_C_given ;	/**< @brief Whether extra-C was given.  */
  unsigned int extra_Qbar_given ;	/**< @brief Whether extra-Qbar was given.  */
  unsigned int extra_Ibar_given ;	/**< @brief Whether extra-Ibar was given.  */
  unsigned int eos_name_given ;	/**< @brief Whether eos-name was given.  */
  unsigned int log10p1_given ;	/**< @brief Whether log10p1 was given.  */
  unsigned int Gamma1_given ;	/**< @brief Whether Gamma1 was given.  */
  unsigned int Gamma2_given ;	/**< @brief Whether Gamma2 was given.  */
  unsigned int Gamma3_given ;	/**< @brief Whether Gamma3 was given.  */
  unsigned int log10rho1_given ;	/**< @brief Whether log10rho1 was given.  */
  unsigned int out_given ;	/**< @brief Whether out was given.  */
  unsigned int out_extra_basename_given ;	/**< @brief Whether out-extra-basename was given.  */

  int param_fit_mode_counter; /**< @brief Counter for mode param_fit */
  int param_manual_mode_counter; /**< @brief Counter for mode param_manual */
} ;

/** @brief The additional parameters to pass to parser functions */
struct cmdline_parser_params
{
  int override; /**< @brief whether to override possibly already present options (default 0) */
  int initialize; /**< @brief whether to initialize the option structure gengetopt_args_info (default 1) */
  int check_required; /**< @brief whether to check that all required options were provided (default 1) */
  int check_ambiguity; /**< @brief whether to check for options already specified in the option structure gengetopt_args_info (default 0) */
  int print_errors; /**< @brief whether getopt_long should print an error message for a bad option (default 1) */
} ;

/** @brief the purpose string of the program */
extern const char *gengetopt_args_info_purpose;
/** @brief the usage string of the program */
extern const char *gengetopt_args_info_usage;
/** @brief the description string of the program */
extern const char *gengetopt_args_info_description;
/** @brief all the lines making the help output */
extern const char *gengetopt_args_info_help[];

/**
 * The command line parser
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser (int argc, char **argv,
  struct gengetopt_args_info *args_info);

/**
 * The command line parser (version with additional parameters - deprecated)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_ext() instead
 */
int cmdline_parser2 (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The command line parser (version with additional parameters)
 * @param argc the number of command line options
 * @param argv the command line options
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_ext (int argc, char **argv,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Save the contents of the option struct into an already open FILE stream.
 * @param outfile the stream where to dump options
 * @param args_info the option struct to dump
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_dump(FILE *outfile,
  struct gengetopt_args_info *args_info);

/**
 * Save the contents of the option struct into a (text) file.
 * This file can be read by the config file parser (if generated by gengetopt)
 * @param filename the file where to save
 * @param args_info the option struct to save
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_file_save(const char *filename,
  struct gengetopt_args_info *args_info);

/**
 * Print the help
 */
void cmdline_parser_print_help(void);
/**
 * Print the version
 */
void cmdline_parser_print_version(void);

/**
 * Initializes all the fields a cmdline_parser_params structure 
 * to their default values
 * @param params the structure to initialize
 */
void cmdline_parser_params_init(struct cmdline_parser_params *params);

/**
 * Allocates dynamically a cmdline_parser_params structure and initializes
 * all its fields to their default values
 * @return the created and initialized cmdline_parser_params structure
 */
struct cmdline_parser_params *cmdline_parser_params_create(void);

/**
 * Initializes the passed gengetopt_args_info structure's fields
 * (also set default values for options that have a default)
 * @param args_info the structure to initialize
 */
void cmdline_parser_init (struct gengetopt_args_info *args_info);
/**
 * Deallocates the string fields of the gengetopt_args_info structure
 * (but does not deallocate the structure itself)
 * @param args_info the structure to deallocate
 */
void cmdline_parser_free (struct gengetopt_args_info *args_info);

/**
 * The config file parser (deprecated version)
 * @param filename the name of the config file
 * @param args_info the structure where option information will be stored
 * @param override whether to override possibly already present options
 * @param initialize whether to initialize the option structure my_args_info
 * @param check_required whether to check that all required options were provided
 * @return 0 if everything went fine, NON 0 if an error took place
 * @deprecated use cmdline_parser_config_file() instead
 */
int cmdline_parser_configfile (const char *filename,
  struct gengetopt_args_info *args_info,
  int override, int initialize, int check_required);

/**
 * The config file parser
 * @param filename the name of the config file
 * @param args_info the structure where option information will be stored
 * @param params additional parameters for the parser
 * @return 0 if everything went fine, NON 0 if an error took place
 */
int cmdline_parser_config_file (const char *filename,
  struct gengetopt_args_info *args_info,
  struct cmdline_parser_params *params);

/**
 * Checks that all the required options were specified
 * @param args_info the structure to check
 * @param prog_name the name of the program that will be used to print
 *   possible errors
 * @return
 */
int cmdline_parser_required (struct gengetopt_args_info *args_info,
  const char *prog_name);

extern const char *cmdline_parser_eos_name_values[];  /**< @brief Possible values for eos-name. */


#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* RUNMODELO2_MULTI_CMDLINE_H */