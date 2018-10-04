// @Library('shared-libs@development')
// import com.towens.*

library identifier: 'sharedlibs@development', retriever: modernSCM(
    [$class: 'GitSCMSource',
     remote: 'https://github.com/TomOwens321/sharedlibs.git'])

node('bbone') {
    stage('Checkout') {
        cf = new checkoutFuncs()
        cf.checkoutWithRetries()
    }

    stage('Test') {
        sh = new sayHello()
        sh.sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
