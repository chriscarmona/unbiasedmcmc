// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// blassoconditional
List blassoconditional(const Eigen::VectorXd& Y, const Eigen::MatrixXd& X, const Eigen::VectorXd& XtY, const Eigen::MatrixXd& XtX, const NumericVector tau2, const double sigma2);
RcppExport SEXP _unbiasedmcmc_blassoconditional(SEXP YSEXP, SEXP XSEXP, SEXP XtYSEXP, SEXP XtXSEXP, SEXP tau2SEXP, SEXP sigma2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type XtY(XtYSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type XtX(XtXSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type tau2(tau2SEXP);
    Rcpp::traits::input_parameter< const double >::type sigma2(sigma2SEXP);
    rcpp_result_gen = Rcpp::wrap(blassoconditional(Y, X, XtY, XtX, tau2, sigma2));
    return rcpp_result_gen;
END_RCPP
}
// blassoconditional_coupled
List blassoconditional_coupled(const Eigen::VectorXd& Y, const Eigen::MatrixXd& X, const Eigen::VectorXd& XtY, const Eigen::MatrixXd& XtX, const NumericVector& tau21, const NumericVector& tau22, const double sigma21, const double sigma22);
RcppExport SEXP _unbiasedmcmc_blassoconditional_coupled(SEXP YSEXP, SEXP XSEXP, SEXP XtYSEXP, SEXP XtXSEXP, SEXP tau21SEXP, SEXP tau22SEXP, SEXP sigma21SEXP, SEXP sigma22SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type XtY(XtYSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type XtX(XtXSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type tau21(tau21SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type tau22(tau22SEXP);
    Rcpp::traits::input_parameter< const double >::type sigma21(sigma21SEXP);
    Rcpp::traits::input_parameter< const double >::type sigma22(sigma22SEXP);
    rcpp_result_gen = Rcpp::wrap(blassoconditional_coupled(Y, X, XtY, XtX, tau21, tau22, sigma21, sigma22));
    return rcpp_result_gen;
END_RCPP
}
// c_chains_to_measure_as_list_
List c_chains_to_measure_as_list_(const List& c_chains, int k, int m);
RcppExport SEXP _unbiasedmcmc_c_chains_to_measure_as_list_(SEXP c_chainsSEXP, SEXP kSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type c_chains(c_chainsSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(c_chains_to_measure_as_list_(c_chains, k, m));
    return rcpp_result_gen;
END_RCPP
}
// estimator_bin_
double estimator_bin_(List c_chains, int component, double lower, double upper, int k, int m, int lag);
RcppExport SEXP _unbiasedmcmc_estimator_bin_(SEXP c_chainsSEXP, SEXP componentSEXP, SEXP lowerSEXP, SEXP upperSEXP, SEXP kSEXP, SEXP mSEXP, SEXP lagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type c_chains(c_chainsSEXP);
    Rcpp::traits::input_parameter< int >::type component(componentSEXP);
    Rcpp::traits::input_parameter< double >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< double >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< int >::type lag(lagSEXP);
    rcpp_result_gen = Rcpp::wrap(estimator_bin_(c_chains, component, lower, upper, k, m, lag));
    return rcpp_result_gen;
END_RCPP
}
// rinvgaussian_c
NumericVector rinvgaussian_c(int n, double mu, double lambda);
RcppExport SEXP _unbiasedmcmc_rinvgaussian_c(SEXP nSEXP, SEXP muSEXP, SEXP lambdaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    rcpp_result_gen = Rcpp::wrap(rinvgaussian_c(n, mu, lambda));
    return rcpp_result_gen;
END_RCPP
}
// rinvgaussian_coupled_c
NumericVector rinvgaussian_coupled_c(double mu1, double mu2, double lambda1, double lambda2);
RcppExport SEXP _unbiasedmcmc_rinvgaussian_coupled_c(SEXP mu1SEXP, SEXP mu2SEXP, SEXP lambda1SEXP, SEXP lambda2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type mu1(mu1SEXP);
    Rcpp::traits::input_parameter< double >::type mu2(mu2SEXP);
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    rcpp_result_gen = Rcpp::wrap(rinvgaussian_coupled_c(mu1, mu2, lambda1, lambda2));
    return rcpp_result_gen;
END_RCPP
}
// ising_sum_
int ising_sum_(const IntegerMatrix& state);
RcppExport SEXP _unbiasedmcmc_ising_sum_(SEXP stateSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type state(stateSEXP);
    rcpp_result_gen = Rcpp::wrap(ising_sum_(state));
    return rcpp_result_gen;
END_RCPP
}
// ising_gibbs_sweep_
IntegerMatrix ising_gibbs_sweep_(IntegerMatrix state, NumericVector proba_beta);
RcppExport SEXP _unbiasedmcmc_ising_gibbs_sweep_(SEXP stateSEXP, SEXP proba_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type state(stateSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type proba_beta(proba_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(ising_gibbs_sweep_(state, proba_beta));
    return rcpp_result_gen;
END_RCPP
}
// ising_coupled_gibbs_sweep_
List ising_coupled_gibbs_sweep_(IntegerMatrix state1, IntegerMatrix state2, NumericVector proba_beta);
RcppExport SEXP _unbiasedmcmc_ising_coupled_gibbs_sweep_(SEXP state1SEXP, SEXP state2SEXP, SEXP proba_betaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type state1(state1SEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type state2(state2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type proba_beta(proba_betaSEXP);
    rcpp_result_gen = Rcpp::wrap(ising_coupled_gibbs_sweep_(state1, state2, proba_beta));
    return rcpp_result_gen;
END_RCPP
}
// sigma_
NumericMatrix sigma_(const NumericMatrix& X, const NumericVector& w);
RcppExport SEXP _unbiasedmcmc_sigma_(SEXP XSEXP, SEXP wSEXP) {
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
RcppExport SEXP _unbiasedmcmc_m_sigma_function_(SEXP omegaSEXP, SEXP XSEXP, SEXP invBSEXP, SEXP KTkappaplusinvBtimesbSEXP) {
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
// logcosh
double logcosh(double x);
RcppExport SEXP _unbiasedmcmc_logcosh(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(logcosh(x));
    return rcpp_result_gen;
END_RCPP
}
// xbeta_
NumericVector xbeta_(const NumericMatrix& X, const NumericVector& beta);
RcppExport SEXP _unbiasedmcmc_xbeta_(SEXP XSEXP, SEXP betaSEXP) {
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
RcppExport SEXP _unbiasedmcmc_w_rejsamplerC(SEXP beta1SEXP, SEXP beta2SEXP, SEXP XSEXP) {
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
// w_max_couplingC
NumericMatrix w_max_couplingC(const NumericVector& beta1, const NumericVector& beta2, const NumericMatrix& X);
RcppExport SEXP _unbiasedmcmc_w_max_couplingC(SEXP beta1SEXP, SEXP beta2SEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type beta1(beta1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type beta2(beta2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(w_max_couplingC(beta1, beta2, X));
    return rcpp_result_gen;
END_RCPP
}
// fast_rmvnorm_
NumericMatrix fast_rmvnorm_(int nsamples, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP _unbiasedmcmc_fast_rmvnorm_(SEXP nsamplesSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_rmvnorm_(nsamples, mean, covariance));
    return rcpp_result_gen;
END_RCPP
}
// fast_rmvnorm_cholesky_
NumericMatrix fast_rmvnorm_cholesky_(int nsamples, const NumericVector& mean, const Eigen::MatrixXd& cholesky);
RcppExport SEXP _unbiasedmcmc_fast_rmvnorm_cholesky_(SEXP nsamplesSEXP, SEXP meanSEXP, SEXP choleskySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nsamples(nsamplesSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type cholesky(choleskySEXP);
    rcpp_result_gen = Rcpp::wrap(fast_rmvnorm_cholesky_(nsamples, mean, cholesky));
    return rcpp_result_gen;
END_RCPP
}
// fast_dmvnorm_
NumericVector fast_dmvnorm_(const NumericMatrix& x, const NumericVector& mean, const NumericMatrix& covariance);
RcppExport SEXP _unbiasedmcmc_fast_dmvnorm_(SEXP xSEXP, SEXP meanSEXP, SEXP covarianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type covariance(covarianceSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_dmvnorm_(x, mean, covariance));
    return rcpp_result_gen;
END_RCPP
}
// fast_dmvnorm_cholesky_inverse_
NumericVector fast_dmvnorm_cholesky_inverse_(const NumericMatrix& x, const NumericVector& mean, const Eigen::MatrixXd& cholesky_inverse);
RcppExport SEXP _unbiasedmcmc_fast_dmvnorm_cholesky_inverse_(SEXP xSEXP, SEXP meanSEXP, SEXP cholesky_inverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type cholesky_inverse(cholesky_inverseSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_dmvnorm_cholesky_inverse_(x, mean, cholesky_inverse));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_max_coupling_
Rcpp::List rmvnorm_max_coupling_(const NumericVector& mu1, const NumericVector& mu2, const NumericMatrix& Sigma1, const NumericMatrix& Sigma2);
RcppExport SEXP _unbiasedmcmc_rmvnorm_max_coupling_(SEXP mu1SEXP, SEXP mu2SEXP, SEXP Sigma1SEXP, SEXP Sigma2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type mu1(mu1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mu2(mu2SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Sigma1(Sigma1SEXP);
    Rcpp::traits::input_parameter< const NumericMatrix& >::type Sigma2(Sigma2SEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_max_coupling_(mu1, mu2, Sigma1, Sigma2));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_max_coupling_cholesky
Rcpp::List rmvnorm_max_coupling_cholesky(const NumericVector& mu1, const NumericVector& mu2, const Eigen::MatrixXd& Cholesky1, const Eigen::MatrixXd& Cholesky2, const Eigen::MatrixXd& Cholesky_inverse1, const Eigen::MatrixXd& Cholesky_inverse2);
RcppExport SEXP _unbiasedmcmc_rmvnorm_max_coupling_cholesky(SEXP mu1SEXP, SEXP mu2SEXP, SEXP Cholesky1SEXP, SEXP Cholesky2SEXP, SEXP Cholesky_inverse1SEXP, SEXP Cholesky_inverse2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type mu1(mu1SEXP);
    Rcpp::traits::input_parameter< const NumericVector& >::type mu2(mu2SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Cholesky1(Cholesky1SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Cholesky2(Cholesky2SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Cholesky_inverse1(Cholesky_inverse1SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Cholesky_inverse2(Cholesky_inverse2SEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_max_coupling_cholesky(mu1, mu2, Cholesky1, Cholesky2, Cholesky_inverse1, Cholesky_inverse2));
    return rcpp_result_gen;
END_RCPP
}
// rmvnorm_reflection_max_coupling_
Rcpp::List rmvnorm_reflection_max_coupling_(const Eigen::VectorXd& mu1, const Eigen::VectorXd& mu2, const Eigen::MatrixXd& Sigma_chol, const Eigen::MatrixXd& inv_Sigma_chol);
RcppExport SEXP _unbiasedmcmc_rmvnorm_reflection_max_coupling_(SEXP mu1SEXP, SEXP mu2SEXP, SEXP Sigma_cholSEXP, SEXP inv_Sigma_cholSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type mu1(mu1SEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type mu2(mu2SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type Sigma_chol(Sigma_cholSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type inv_Sigma_chol(inv_Sigma_cholSEXP);
    rcpp_result_gen = Rcpp::wrap(rmvnorm_reflection_max_coupling_(mu1, mu2, Sigma_chol, inv_Sigma_chol));
    return rcpp_result_gen;
END_RCPP
}
// beta2e_
NumericVector beta2e_(const NumericVector& beta, const NumericMatrix& C);
RcppExport SEXP _unbiasedmcmc_beta2e_(SEXP betaSEXP, SEXP CSEXP) {
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
RcppExport SEXP _unbiasedmcmc_cut_in_fifth_(SEXP xSEXP) {
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
RcppExport SEXP _unbiasedmcmc_propensity_module2_loglik2_(SEXP theta1sSEXP, SEXP theta2sSEXP, SEXP XSEXP, SEXP CSEXP, SEXP YSEXP) {
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
// prune_measure_
NumericMatrix prune_measure_(const NumericMatrix& df);
RcppExport SEXP _unbiasedmcmc_prune_measure_(SEXP dfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericMatrix& >::type df(dfSEXP);
    rcpp_result_gen = Rcpp::wrap(prune_measure_(df));
    return rcpp_result_gen;
END_RCPP
}
// sample_pair01
IntegerVector sample_pair01(const NumericVector& selection);
RcppExport SEXP _unbiasedmcmc_sample_pair01(SEXP selectionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector& >::type selection(selectionSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_pair01(selection));
    return rcpp_result_gen;
END_RCPP
}
// marginal_likelihood_c_2
double marginal_likelihood_c_2(Eigen::VectorXf selection, const Eigen::MatrixXf& X, const Eigen::VectorXf& Y, double Y2, double g);
RcppExport SEXP _unbiasedmcmc_marginal_likelihood_c_2(SEXP selectionSEXP, SEXP XSEXP, SEXP YSEXP, SEXP Y2SEXP, SEXP gSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::VectorXf >::type selection(selectionSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXf& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Eigen::VectorXf& >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type Y2(Y2SEXP);
    Rcpp::traits::input_parameter< double >::type g(gSEXP);
    rcpp_result_gen = Rcpp::wrap(marginal_likelihood_c_2(selection, X, Y, Y2, g));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_unbiasedmcmc_blassoconditional", (DL_FUNC) &_unbiasedmcmc_blassoconditional, 6},
    {"_unbiasedmcmc_blassoconditional_coupled", (DL_FUNC) &_unbiasedmcmc_blassoconditional_coupled, 8},
    {"_unbiasedmcmc_c_chains_to_measure_as_list_", (DL_FUNC) &_unbiasedmcmc_c_chains_to_measure_as_list_, 3},
    {"_unbiasedmcmc_estimator_bin_", (DL_FUNC) &_unbiasedmcmc_estimator_bin_, 7},
    {"_unbiasedmcmc_rinvgaussian_c", (DL_FUNC) &_unbiasedmcmc_rinvgaussian_c, 3},
    {"_unbiasedmcmc_rinvgaussian_coupled_c", (DL_FUNC) &_unbiasedmcmc_rinvgaussian_coupled_c, 4},
    {"_unbiasedmcmc_ising_sum_", (DL_FUNC) &_unbiasedmcmc_ising_sum_, 1},
    {"_unbiasedmcmc_ising_gibbs_sweep_", (DL_FUNC) &_unbiasedmcmc_ising_gibbs_sweep_, 2},
    {"_unbiasedmcmc_ising_coupled_gibbs_sweep_", (DL_FUNC) &_unbiasedmcmc_ising_coupled_gibbs_sweep_, 3},
    {"_unbiasedmcmc_sigma_", (DL_FUNC) &_unbiasedmcmc_sigma_, 2},
    {"_unbiasedmcmc_m_sigma_function_", (DL_FUNC) &_unbiasedmcmc_m_sigma_function_, 4},
    {"_unbiasedmcmc_logcosh", (DL_FUNC) &_unbiasedmcmc_logcosh, 1},
    {"_unbiasedmcmc_xbeta_", (DL_FUNC) &_unbiasedmcmc_xbeta_, 2},
    {"_unbiasedmcmc_w_rejsamplerC", (DL_FUNC) &_unbiasedmcmc_w_rejsamplerC, 3},
    {"_unbiasedmcmc_w_max_couplingC", (DL_FUNC) &_unbiasedmcmc_w_max_couplingC, 3},
    {"_unbiasedmcmc_fast_rmvnorm_", (DL_FUNC) &_unbiasedmcmc_fast_rmvnorm_, 3},
    {"_unbiasedmcmc_fast_rmvnorm_cholesky_", (DL_FUNC) &_unbiasedmcmc_fast_rmvnorm_cholesky_, 3},
    {"_unbiasedmcmc_fast_dmvnorm_", (DL_FUNC) &_unbiasedmcmc_fast_dmvnorm_, 3},
    {"_unbiasedmcmc_fast_dmvnorm_cholesky_inverse_", (DL_FUNC) &_unbiasedmcmc_fast_dmvnorm_cholesky_inverse_, 3},
    {"_unbiasedmcmc_rmvnorm_max_coupling_", (DL_FUNC) &_unbiasedmcmc_rmvnorm_max_coupling_, 4},
    {"_unbiasedmcmc_rmvnorm_max_coupling_cholesky", (DL_FUNC) &_unbiasedmcmc_rmvnorm_max_coupling_cholesky, 6},
    {"_unbiasedmcmc_rmvnorm_reflection_max_coupling_", (DL_FUNC) &_unbiasedmcmc_rmvnorm_reflection_max_coupling_, 4},
    {"_unbiasedmcmc_beta2e_", (DL_FUNC) &_unbiasedmcmc_beta2e_, 2},
    {"_unbiasedmcmc_cut_in_fifth_", (DL_FUNC) &_unbiasedmcmc_cut_in_fifth_, 1},
    {"_unbiasedmcmc_propensity_module2_loglik2_", (DL_FUNC) &_unbiasedmcmc_propensity_module2_loglik2_, 5},
    {"_unbiasedmcmc_prune_measure_", (DL_FUNC) &_unbiasedmcmc_prune_measure_, 1},
    {"_unbiasedmcmc_sample_pair01", (DL_FUNC) &_unbiasedmcmc_sample_pair01, 1},
    {"_unbiasedmcmc_marginal_likelihood_c_2", (DL_FUNC) &_unbiasedmcmc_marginal_likelihood_c_2, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_unbiasedmcmc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
