// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// calculate_greek_sum
NumericMatrix calculate_greek_sum(NumericMatrix greek, NumericMatrix x);
RcppExport SEXP clvm_calculate_greek_sum(SEXP greekSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type greek(greekSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_greek_sum(greek, x));
    return rcpp_result_gen;
END_RCPP
}
// greek_square_exp
NumericMatrix greek_square_exp(NumericMatrix m_g, NumericMatrix s_g, NumericMatrix x);
RcppExport SEXP clvm_greek_square_exp(SEXP m_gSEXP, SEXP s_gSEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m_g(m_gSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_g(s_gSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(greek_square_exp(m_g, s_g, x));
    return rcpp_result_gen;
END_RCPP
}
// cavi_update_pst
NumericMatrix cavi_update_pst(NumericMatrix y, NumericMatrix x, NumericVector m_c, NumericVector m_mu, NumericVector s_c, NumericMatrix m_alpha, NumericMatrix m_beta, NumericMatrix s_beta, NumericVector a_tau, NumericVector b_tau, NumericVector q, double tau_q);
RcppExport SEXP clvm_cavi_update_pst(SEXP ySEXP, SEXP xSEXP, SEXP m_cSEXP, SEXP m_muSEXP, SEXP s_cSEXP, SEXP m_alphaSEXP, SEXP m_betaSEXP, SEXP s_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP qSEXP, SEXP tau_qSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_c(m_cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_mu(m_muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_beta(s_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type tau_q(tau_qSEXP);
    rcpp_result_gen = Rcpp::wrap(cavi_update_pst(y, x, m_c, m_mu, s_c, m_alpha, m_beta, s_beta, a_tau, b_tau, q, tau_q));
    return rcpp_result_gen;
END_RCPP
}
// cavi_update_mu
NumericMatrix cavi_update_mu(NumericMatrix y, NumericMatrix x, NumericVector m_t, NumericVector m_c, NumericMatrix m_alpha, NumericMatrix m_beta, NumericVector a_tau, NumericVector b_tau, double tau_mu);
RcppExport SEXP clvm_cavi_update_mu(SEXP ySEXP, SEXP xSEXP, SEXP m_tSEXP, SEXP m_cSEXP, SEXP m_alphaSEXP, SEXP m_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP tau_muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_t(m_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_c(m_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< double >::type tau_mu(tau_muSEXP);
    rcpp_result_gen = Rcpp::wrap(cavi_update_mu(y, x, m_t, m_c, m_alpha, m_beta, a_tau, b_tau, tau_mu));
    return rcpp_result_gen;
END_RCPP
}
// cavi_update_c
NumericMatrix cavi_update_c(NumericMatrix y, NumericMatrix x, NumericVector m_t, NumericVector s_t, NumericMatrix m_alpha, NumericMatrix m_beta, NumericVector a_tau, NumericVector b_tau, NumericVector m_mu, double tau_c);
RcppExport SEXP clvm_cavi_update_c(SEXP ySEXP, SEXP xSEXP, SEXP m_tSEXP, SEXP s_tSEXP, SEXP m_alphaSEXP, SEXP m_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP m_muSEXP, SEXP tau_cSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_t(m_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_t(s_tSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_mu(m_muSEXP);
    Rcpp::traits::input_parameter< double >::type tau_c(tau_cSEXP);
    rcpp_result_gen = Rcpp::wrap(cavi_update_c(y, x, m_t, s_t, m_alpha, m_beta, a_tau, b_tau, m_mu, tau_c));
    return rcpp_result_gen;
END_RCPP
}
// cavi_update_tau
NumericMatrix cavi_update_tau(NumericMatrix y, NumericMatrix x, NumericVector m_t, NumericVector s_t, NumericVector m_c, NumericVector s_c, NumericMatrix m_alpha, NumericMatrix m_beta, NumericMatrix s_alpha, NumericMatrix s_beta, NumericVector m_mu, NumericVector s_mu, double a, double b);
RcppExport SEXP clvm_cavi_update_tau(SEXP ySEXP, SEXP xSEXP, SEXP m_tSEXP, SEXP s_tSEXP, SEXP m_cSEXP, SEXP s_cSEXP, SEXP m_alphaSEXP, SEXP m_betaSEXP, SEXP s_alphaSEXP, SEXP s_betaSEXP, SEXP m_muSEXP, SEXP s_muSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_t(m_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_t(s_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_c(m_cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_alpha(s_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_beta(s_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_mu(m_muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_mu(s_muSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(cavi_update_tau(y, x, m_t, s_t, m_c, s_c, m_alpha, m_beta, s_alpha, s_beta, m_mu, s_mu, a, b));
    return rcpp_result_gen;
END_RCPP
}
// cavi_update_alpha
NumericVector cavi_update_alpha(int p, int g, NumericMatrix y, NumericMatrix x, NumericVector m_t, NumericVector m_c, NumericMatrix m_alpha, NumericMatrix m_beta, NumericVector a_tau, NumericVector b_tau, NumericVector m_mu, double tau_alpha);
RcppExport SEXP clvm_cavi_update_alpha(SEXP pSEXP, SEXP gSEXP, SEXP ySEXP, SEXP xSEXP, SEXP m_tSEXP, SEXP m_cSEXP, SEXP m_alphaSEXP, SEXP m_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP m_muSEXP, SEXP tau_alphaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type g(gSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_t(m_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_c(m_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_mu(m_muSEXP);
    Rcpp::traits::input_parameter< double >::type tau_alpha(tau_alphaSEXP);
    rcpp_result_gen = Rcpp::wrap(cavi_update_alpha(p, g, y, x, m_t, m_c, m_alpha, m_beta, a_tau, b_tau, m_mu, tau_alpha));
    return rcpp_result_gen;
END_RCPP
}
// cavi_update_beta
NumericVector cavi_update_beta(int p, int g, NumericMatrix y, NumericMatrix x, NumericVector m_t, NumericVector s_t, NumericVector m_c, NumericMatrix m_alpha, NumericMatrix m_beta, NumericVector a_tau, NumericVector b_tau, NumericMatrix a_chi, NumericMatrix b_chi, NumericVector m_mu);
RcppExport SEXP clvm_cavi_update_beta(SEXP pSEXP, SEXP gSEXP, SEXP ySEXP, SEXP xSEXP, SEXP m_tSEXP, SEXP s_tSEXP, SEXP m_cSEXP, SEXP m_alphaSEXP, SEXP m_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP a_chiSEXP, SEXP b_chiSEXP, SEXP m_muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type g(gSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_t(m_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_t(s_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_c(m_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type a_chi(a_chiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type b_chi(b_chiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_mu(m_muSEXP);
    rcpp_result_gen = Rcpp::wrap(cavi_update_beta(p, g, y, x, m_t, s_t, m_c, m_alpha, m_beta, a_tau, b_tau, a_chi, b_chi, m_mu));
    return rcpp_result_gen;
END_RCPP
}
// cavi_update_chi
NumericVector cavi_update_chi(double m_beta_pg, double s_beta_pg, double a_beta, double b_beta);
RcppExport SEXP clvm_cavi_update_chi(SEXP m_beta_pgSEXP, SEXP s_beta_pgSEXP, SEXP a_betaSEXP, SEXP b_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type m_beta_pg(m_beta_pgSEXP);
    Rcpp::traits::input_parameter< double >::type s_beta_pg(s_beta_pgSEXP);
    Rcpp::traits::input_parameter< double >::type a_beta(a_betaSEXP);
    Rcpp::traits::input_parameter< double >::type b_beta(b_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(cavi_update_chi(m_beta_pg, s_beta_pg, a_beta, b_beta));
    return rcpp_result_gen;
END_RCPP
}
// calculate_E_log_Y_given_theta
double calculate_E_log_Y_given_theta(NumericMatrix y, NumericMatrix x, NumericVector m_t, NumericVector s_t, NumericVector m_c, NumericVector s_c, NumericMatrix m_alpha, NumericMatrix s_alpha, NumericMatrix m_beta, NumericMatrix s_beta, NumericVector a_tau, NumericVector b_tau, NumericVector m_mu, NumericVector s_mu);
RcppExport SEXP clvm_calculate_E_log_Y_given_theta(SEXP ySEXP, SEXP xSEXP, SEXP m_tSEXP, SEXP s_tSEXP, SEXP m_cSEXP, SEXP s_cSEXP, SEXP m_alphaSEXP, SEXP s_alphaSEXP, SEXP m_betaSEXP, SEXP s_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP m_muSEXP, SEXP s_muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_t(m_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_t(s_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_c(m_cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_alpha(s_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_beta(s_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_mu(m_muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_mu(s_muSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_E_log_Y_given_theta(y, x, m_t, s_t, m_c, s_c, m_alpha, s_alpha, m_beta, s_beta, a_tau, b_tau, m_mu, s_mu));
    return rcpp_result_gen;
END_RCPP
}
// calculate_E_log_p
double calculate_E_log_p(NumericVector m_t, NumericVector s_t, NumericVector m_c, NumericVector s_c, NumericMatrix m_alpha, NumericMatrix s_alpha, NumericMatrix m_beta, NumericMatrix s_beta, NumericVector a_tau, NumericVector b_tau, NumericVector m_mu, NumericVector s_mu, NumericMatrix a_chi, NumericMatrix b_chi, NumericVector q, double tau_q, double tau_mu, double tau_c, double a, double b, double tau_alpha, double a_beta, double b_beta);
RcppExport SEXP clvm_calculate_E_log_p(SEXP m_tSEXP, SEXP s_tSEXP, SEXP m_cSEXP, SEXP s_cSEXP, SEXP m_alphaSEXP, SEXP s_alphaSEXP, SEXP m_betaSEXP, SEXP s_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP m_muSEXP, SEXP s_muSEXP, SEXP a_chiSEXP, SEXP b_chiSEXP, SEXP qSEXP, SEXP tau_qSEXP, SEXP tau_muSEXP, SEXP tau_cSEXP, SEXP aSEXP, SEXP bSEXP, SEXP tau_alphaSEXP, SEXP a_betaSEXP, SEXP b_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m_t(m_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_t(s_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_c(m_cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_alpha(s_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_beta(s_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_mu(m_muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_mu(s_muSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type a_chi(a_chiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type b_chi(b_chiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type tau_q(tau_qSEXP);
    Rcpp::traits::input_parameter< double >::type tau_mu(tau_muSEXP);
    Rcpp::traits::input_parameter< double >::type tau_c(tau_cSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type tau_alpha(tau_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type a_beta(a_betaSEXP);
    Rcpp::traits::input_parameter< double >::type b_beta(b_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_E_log_p(m_t, s_t, m_c, s_c, m_alpha, s_alpha, m_beta, s_beta, a_tau, b_tau, m_mu, s_mu, a_chi, b_chi, q, tau_q, tau_mu, tau_c, a, b, tau_alpha, a_beta, b_beta));
    return rcpp_result_gen;
END_RCPP
}
// calculate_E_log_q
double calculate_E_log_q(NumericVector s_t, NumericVector s_c, NumericMatrix s_alpha, NumericMatrix s_beta, NumericVector a_tau, NumericVector b_tau, NumericVector s_mu, NumericMatrix a_chi, NumericMatrix b_chi);
RcppExport SEXP clvm_calculate_E_log_q(SEXP s_tSEXP, SEXP s_cSEXP, SEXP s_alphaSEXP, SEXP s_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP s_muSEXP, SEXP a_chiSEXP, SEXP b_chiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type s_t(s_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_alpha(s_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_beta(s_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_mu(s_muSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type a_chi(a_chiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type b_chi(b_chiSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_E_log_q(s_t, s_c, s_alpha, s_beta, a_tau, b_tau, s_mu, a_chi, b_chi));
    return rcpp_result_gen;
END_RCPP
}
// calculate_elbo
double calculate_elbo(NumericMatrix y, NumericMatrix x, NumericVector m_t, NumericVector s_t, NumericVector m_c, NumericVector s_c, NumericMatrix m_alpha, NumericMatrix s_alpha, NumericMatrix m_beta, NumericMatrix s_beta, NumericVector a_tau, NumericVector b_tau, NumericMatrix a_chi, NumericMatrix b_chi, NumericVector m_mu, NumericVector s_mu, NumericVector q, double tau_q, double tau_mu, double tau_c, double a, double b, double tau_alpha, double a_beta, double b_beta);
RcppExport SEXP clvm_calculate_elbo(SEXP ySEXP, SEXP xSEXP, SEXP m_tSEXP, SEXP s_tSEXP, SEXP m_cSEXP, SEXP s_cSEXP, SEXP m_alphaSEXP, SEXP s_alphaSEXP, SEXP m_betaSEXP, SEXP s_betaSEXP, SEXP a_tauSEXP, SEXP b_tauSEXP, SEXP a_chiSEXP, SEXP b_chiSEXP, SEXP m_muSEXP, SEXP s_muSEXP, SEXP qSEXP, SEXP tau_qSEXP, SEXP tau_muSEXP, SEXP tau_cSEXP, SEXP aSEXP, SEXP bSEXP, SEXP tau_alphaSEXP, SEXP a_betaSEXP, SEXP b_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type y(ySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_t(m_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_t(s_tSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_c(m_cSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_c(s_cSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_alpha(m_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_alpha(s_alphaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type m_beta(m_betaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type s_beta(s_betaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type a_tau(a_tauSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type b_tau(b_tauSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type a_chi(a_chiSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type b_chi(b_chiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type m_mu(m_muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type s_mu(s_muSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type tau_q(tau_qSEXP);
    Rcpp::traits::input_parameter< double >::type tau_mu(tau_muSEXP);
    Rcpp::traits::input_parameter< double >::type tau_c(tau_cSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    Rcpp::traits::input_parameter< double >::type tau_alpha(tau_alphaSEXP);
    Rcpp::traits::input_parameter< double >::type a_beta(a_betaSEXP);
    Rcpp::traits::input_parameter< double >::type b_beta(b_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(calculate_elbo(y, x, m_t, s_t, m_c, s_c, m_alpha, s_alpha, m_beta, s_beta, a_tau, b_tau, a_chi, b_chi, m_mu, s_mu, q, tau_q, tau_mu, tau_c, a, b, tau_alpha, a_beta, b_beta));
    return rcpp_result_gen;
END_RCPP
}
