// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// gaussian_max_couplingC
NumericVector gaussian_max_couplingC(const NumericVector& mu1, const NumericVector& mu2, const NumericMatrix& Sigma1, const NumericMatrix& Sigma2);
RcppExport SEXP debiasedmcmc_gaussian_max_couplingC(SEXP mu1SEXP, SEXP mu2SEXP, SEXP Sigma1SEXP, SEXP Sigma2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type mu1(mu1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mu2(mu2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Sigma1(Sigma1SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Sigma2(Sigma2SEXP);
    rcpp_result_gen = Rcpp::wrap(gaussian_max_couplingC(mu1, mu2, Sigma1, Sigma2));
    return rcpp_result_gen;
END_RCPP
}
// gaussian_max_coupling_cholesky
NumericVector gaussian_max_coupling_cholesky(const NumericVector& mu1, const NumericVector& mu2, const Eigen::MatrixXd& Cholesky1, const Eigen::MatrixXd& Cholesky2, const Eigen::MatrixXd& Cholesky_inverse1, const Eigen::MatrixXd& Cholesky_inverse2);
RcppExport SEXP debiasedmcmc_gaussian_max_coupling_cholesky(SEXP mu1SEXP, SEXP mu2SEXP, SEXP Cholesky1SEXP, SEXP Cholesky2SEXP, SEXP Cholesky_inverse1SEXP, SEXP Cholesky_inverse2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type mu1(mu1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mu2(mu2SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Cholesky1(Cholesky1SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Cholesky2(Cholesky2SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Cholesky_inverse1(Cholesky_inverse1SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Cholesky_inverse2(Cholesky_inverse2SEXP);
    rcpp_result_gen = Rcpp::wrap(gaussian_max_coupling_cholesky(mu1, mu2, Cholesky1, Cholesky2, Cholesky_inverse1, Cholesky_inverse2));
    return rcpp_result_gen;
END_RCPP
}
// xbeta_
NumericVector xbeta_(const NumericMatrix& X, const NumericVector& beta);
RcppExport SEXP debiasedmcmc_xbeta_(SEXP XSEXP, SEXP betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    rcpp_result_gen = Rcpp::wrap(xbeta_(X, beta));
    return rcpp_result_gen;
END_RCPP
}
// w_rejsamplerC
NumericMatrix w_rejsamplerC(const NumericVector& beta1, const NumericVector& beta2, const NumericMatrix& X);
RcppExport SEXP debiasedmcmc_w_rejsamplerC(SEXP beta1SEXP, SEXP beta2SEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type beta1(beta1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta2(beta2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(w_rejsamplerC(beta1, beta2, X));
    return rcpp_result_gen;
END_RCPP
}
// estimator_bin
double estimator_bin(List c_chains, int component, double lower, double upper, int k, int K);
RcppExport SEXP debiasedmcmc_estimator_bin(SEXP c_chainsSEXP, SEXP componentSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP kSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type c_chains(c_chainsSEXP);
    Rcpp::traits::input_parameter< int >::type component(componentSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(estimator_bin(c_chains, component, lower, upper, k, K));
    return rcpp_result_gen;
END_RCPP
}
// sigma_
NumericMatrix sigma_(const NumericMatrix& X, const NumericVector& w);
RcppExport SEXP debiasedmcmc_sigma_(SEXP XSEXP, SEXP wSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type w(wSEXP);
    rcpp_result_gen = Rcpp::wrap(sigma_(X, w));
    return rcpp_result_gen;
END_RCPP
}
// m_sigma_function_
List m_sigma_function_(const Eigen::Map<Eigen::MatrixXd>& omega, const Eigen::Map<Eigen::MatrixXd>& X, const Eigen::Map<Eigen::MatrixXd>& invB, const Eigen::Map<Eigen::VectorXd>& KTkappaplusinvBtimesb);
RcppExport SEXP debiasedmcmc_m_sigma_function_(SEXP omegaSEXP, SEXP XSEXP, SEXP invBSEXP, SEXP KTkappaplusinvBtimesbSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type omega(omegaSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::MatrixXd>& >::type invB(invBSEXP);
    Rcpp::traits::input_parameter< const Eigen::Map<Eigen::VectorXd>& >::type KTkappaplusinvBtimesb(KTkappaplusinvBtimesbSEXP);
    rcpp_result_gen = Rcpp::wrap(m_sigma_function_(omega, X, invB, KTkappaplusinvBtimesb));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm
NumericMatrix rmvnorm(int nsamples, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP debiasedmcmc_rmvnorm(SEXP nsamplesSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm(nsamples, mean, covariance));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_cholesky
NumericMatrix rmvnorm_cholesky(int nsamples, const NumericVector& mean, const Eigen::MatrixXd& cholesky);
RcppExport SEXP debiasedmcmc_rmvnorm_cholesky(SEXP nsamplesSEXP, SEXP meanSEXP, SEXP choleskySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type cholesky(choleskySEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_cholesky(nsamples, mean, cholesky));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm
NumericVector dmvnorm(const NumericMatrix& x, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP debiasedmcmc_dmvnorm(SEXP xSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm(x, mean, covariance));
    return rcpp_result_gen;
END_RCPP
}
// dmvnorm_cholesky_inverse
NumericVector dmvnorm_cholesky_inverse(const NumericMatrix& x, const NumericVector& mean, const Eigen::MatrixXd& cholesky_inverse);
RcppExport SEXP debiasedmcmc_dmvnorm_cholesky_inverse(SEXP xSEXP, SEXP meanSEXP, SEXP cholesky_inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type cholesky_inverse(cholesky_inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(dmvnorm_cholesky_inverse(x, mean, cholesky_inverse));
    return rcpp_result_gen;
END_RCPP
}
// beta2e_
NumericVector beta2e_(const NumericVector& beta, const NumericMatrix& C);
RcppExport SEXP debiasedmcmc_beta2e_(SEXP betaSEXP, SEXP CSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type C(CSEXP);
    rcpp_result_gen = Rcpp::wrap(beta2e_(beta, C));
    return rcpp_result_gen;
END_RCPP
}
// cut_in_fifth_
IntegerVector cut_in_fifth_(const NumericVector& x);
RcppExport SEXP debiasedmcmc_cut_in_fifth_(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(cut_in_fifth_(x));
    return rcpp_result_gen;
END_RCPP
}
// propensity_module2_loglik2_
NumericVector propensity_module2_loglik2_(NumericMatrix theta1s, NumericMatrix theta2s, const NumericVector& X, const NumericMatrix& C, const NumericVector& Y);
RcppExport SEXP debiasedmcmc_propensity_module2_loglik2_(SEXP theta1sSEXP, SEXP theta2sSEXP, SEXP XSEXP, SEXP CSEXP, SEXP YSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type theta1s(theta1sSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type theta2s(theta2sSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type C(CSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type Y(YSEXP);
    rcpp_result_gen = Rcpp::wrap(propensity_module2_loglik2_(theta1s, theta2s, X, C, Y));
    return rcpp_result_gen;
END_RCPP
}
